#include "phyzxmodel.h"

Phyzxmodel::Phyzxmodel() {}

Phyzxmodel::~Phyzxmodel() {}

void Phyzxmodel::setUp(){
    RK4Worker = new RungeKutta4();
    RK4Worker->setUp(0.1, 0);
	preserved_energy = 1 / 2 * (1.42 + sin(theta_zero) * rod_length) - cos(0 + cos(theta_zero) * rod_length);
    //inertia moment is constant after we get all the variables and will not change greatly
    inertia_moment = 1/3 * rod_density * (rod_length * pow(rod_diameter,2)) / 4000 *
                    pow(rod_length, 2) + 2/5 * object_density * (PI * pow(object_diameter, 3)) / 6000 *
                    object_diameter * object_diameter / 2 * object_diameter / 2;
}

void Phyzxmodel::setTht0(double t_z){
    m_dirty = true;
    theta_zero = t_z;
}

void Phyzxmodel::setRDens(double n_d){
    m_dirty = true;
    rod_density = n_d;
}

void Phyzxmodel::setLen(double n_l){
    m_dirty = true;
    rod_length = n_l;
}

void Phyzxmodel::setSpd(double n_s){
    m_dirty = true;
    simulation_speed = n_s;
}

void Phyzxmodel::setDiam(double n_d){
    m_dirty = true;
    object_diameter = n_d;
}

void Phyzxmodel::setODens(double n_d){
    m_dirty = true;
    object_density = n_d;
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
    if (rod_density == -1 || rod_length == -1 || simulation_speed == -1 || rod_diameter == -1)
        throw 0; //we need these values before evaluating data
    swing_period = 4 * sqrt(rod_length + object_diameter) * (1 + 1/4 * pow(sin(toRad(theta_current) / 2), 2) + 9/64*pow(sin(toRad(theta_current) / 2), 4));
}

double Phyzxmodel::getKEnergy(){
    return kinetic_energy;
}

double Phyzxmodel::getPEnergy(){
    return preserved_energy;
}

double Phyzxmodel::getDiam(){
    return object_diameter;
}

double Phyzxmodel::getPeriod(){
    return swing_period;
}

double Phyzxmodel::getSpd(){
    //Inertia moment = 1/3 * m * rod_length^2 + 2/5 * obj_mass * obj_raduis^2
    //Thx Wiki
    //Though it's a bit complicated
    return sqrt(kinetic_energy * 2 / inertia_moment);
}
