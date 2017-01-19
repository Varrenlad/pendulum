#include "phyzxmodel.h"

Phyzxmodel::Phyzxmodel() {}

Phyzxmodel::~Phyzxmodel() {}

void Phyzxmodel::setUp(){
    isReady();
    if (!m_ready)
        throw 1;
    m_dirty = false;
    /*natural_freq = swing_period = 2 * PI * sqrt(rod_length + G) *
            (1 + 1/4 * pow(sin(RAD(theta_current) / 2), 2)
            + 9/64*pow(sin(RAD(theta_current) / 2), 4));*/
    natural_freq = sqrt(G/rod_length);
}

void Phyzxmodel::setImp(float impulse){
    m_dirty = true;
    data.setY(impulse);
}

void Phyzxmodel::setTht0(float t_z){
    m_dirty = true;
    data.setX(t_z);
}

void Phyzxmodel::setRMass(double n_m){
    m_dirty = true;
    rod_mass = n_m;
}

void Phyzxmodel::setLen(double n_l){
    m_dirty = true;
//    rod_length = n_l;

    m_coeff = G / n_l;
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
    damping_factor = n_d / (object_mass * rod_length * rod_length);
    if (p_type == NONE)
        damping_factor *= (9.0 / 4.0);
}

void Phyzxmodel::currentTime(double t_a){
    current_time = t_a;
}

///our alpha and omega, gives us angle deviation from (0, length) line
double Phyzxmodel::getTheta(){
    return data.x();
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
            (1 + 1/4 * pow(sin(RAD(data.x()) / 2), 2) +
             9/64*pow(sin(RAD(data.x()) / 2), 4));
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
}

QVector2D Phyzxmodel::RK4Step(QVector2D y, double t){
    QVector2D temp;
    temp.setX(y[0]);
    temp.setY(-damping_factor * y[1] - std::sin(y[0]));
    return temp;
}

void Phyzxmodel::RK4(){
    QVector2D rk[4];
    rk[0] = RK4Step(data, current_time) * dt;
    rk[1] = RK4Step(data + 0.5 * rk[0], current_time + 0.5 * dt) * dt;
    rk[2] = RK4Step(data + 0.5 * rk[1], current_time + 0.5 * dt) * dt;
    rk[3] = RK4Step(data + rk[2], current_time + dt) * dt;
    data += (rk[0] + rk[1] * 2 + rk[2] * 2 + rk[3]) / 6.0;
}
