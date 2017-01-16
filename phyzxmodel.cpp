#include "phyzxmodel.h"

Phyzxmodel::Phyzxmodel() {}

Phyzxmodel::~Phyzxmodel() {}

void Phyzxmodel::setUp(){
    isReady();
    if (!m_ready)
        throw 1;
    natutal_freq = swing_period = 2 * PI * sqrt(rod_length + G) * (1 + 1/4 * pow(sin(toRad(theta_current) / 2), 2)
                                                                   + 9/64*pow(sin(toRad(theta_current) / 2), 4));
    RK4Worker = new RungeKutta4();
    RK4Worker->setUp(0.1, damping_factor / (2 * (object_mass + rod_mass)));
    preserved_energy = 1 / 2 * (1.42 + sin(theta_zero) * rod_length) - cos(0 + cos(theta_zero) * rod_length);
}

void Phyzxmodel::setTht0(double t_z){
    m_dirty = true;
    theta_zero = t_z;
}

void Phyzxmodel::setRMass(double n_m){
    m_dirty = true;
    rod_mass = n_m;
}

void Phyzxmodel::setLen(double n_l){
    m_dirty = true;
    rod_length = n_l;
}

void Phyzxmodel::setSpd(double n_s){
    m_dirty = true;
    simulation_speed = n_s;
}

void Phyzxmodel::setComp(COMPOUND n_c){
    m_dirty = true;
    p_type = n_c;
}

void Phyzxmodel::setDamp(double n_d){
    m_dirty = true;
    RK4Worker->setUp(0.1, n_d);
    damping_factor = n_d;
}

void Phyzxmodel::currentTime(double t_a){
    if (!m_dirty && m_ready){
    data = RK4Worker->RK4Step(t_a);
    angleChanged(data.x());
    }
}

void Phyzxmodel::angleChanged(float newval){
    //emit data.x();
    emit newval;
}

///our alpha and omega, gives us angle deviation from (0, length) line
double Phyzxmodel::getTheta(){
    return theta_current;
}

COMPOUND Phyzxmodel::getComp(){
    return p_type;
}

//main working module
void Phyzxmodel::updateData(){
    if (!m_ready)
        throw 1;
    if (rod_mass == -1 || rod_length == -1 || simulation_speed == -1)
        throw 0; //we need these values before evaluating data
    swing_period = 2 * PI * sqrt(rod_length + G) *
            (1 + 1/4 * pow(sin(toRad(theta_current) / 2), 2) + 9/64*pow(sin(toRad(theta_current) / 2), 4));
}

double Phyzxmodel::getKEnergy(){
    return kinetic_energy;
}

double Phyzxmodel::getPEnergy(){
    return preserved_energy;
}

double Phyzxmodel::getPeriod(){
    return swing_period;
}

void Phyzxmodel::isReady(){
    if (m_dirty)
        delete RK4Worker;
    if (rod_length != -1 && rod_mass != -1 &&
            simulation_speed != -1 && theta_zero != -1){
        m_dirty = false;
        m_ready = true;
    }
}
