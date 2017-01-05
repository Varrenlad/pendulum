#ifndef PHYZXMODEL_H
#define PHYZXMODEL_H

#include <cmath>
#include <chrono>

#define PI 3.14159265359
#define G 9.8145 //not exact data, but good enough for Novosibirsk

enum MODE{RIGID = 0, NONRIGID};
enum COMPOUND{NONE = 0, BALL};

class Phyzxmodel
{
public:
    Phyzxmodel(double &theta_0);
    void setRDens(double &n_d);
    void setLen(double &n_l);
    void setSpd(double &n_s);
    void setDiam(double &n_d);
    void setODens(double &n_d);
    void setComp(COMPOUND &n_c);
    ///our alpha and omega, gives us angle deviation from (0, length) line
    double getTheta();
    COMPOUND getComp();
    void updateData(std::chrono::time_point<std::chrono::steady_clock>);
    double getKEnergy();
    double getPEnergy();
    double getDiam();
    double getPeriod();
    ~Phyzxmodel();
    //remove copy and move constructors
    Phyzxmodel(Phyzxmodel const &) = delete;
    void operator=(Phyzxmodel const &that) = delete;
private:
    double rod_density, rod_length, simulation_speed,
    object_density, object_diameter, object_width,
    theta_zero, theta_max, theta_current, damping_factor,
    preserved_energy, kinetic_energy, swing_period;
    COMPOUND p_type;
    //starting time point
    std::chrono::time_point<std::chrono::steady_clock> starting_sim_point;

};

#endif // PHYZXMODEL_H
