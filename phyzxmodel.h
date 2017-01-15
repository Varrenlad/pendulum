#ifndef PHYZXMODEL_H
#define PHYZXMODEL_H

#include <cmath>
#include <chrono>
#include "rungekutta4.h"

#define PI 3.14159265359
#define G 9.8145 //not exact data, but good enough for Novosibirsk
#define toRad(x) (x*0.01745329251)

enum COMPOUND{NONE = 0, BALL};

class Phyzxmodel
{
signals:
    void angleChanged(float);
//    void updateGraphs();
public:
    Phyzxmodel();
    void setUp();
    void updateData();
    double getKEnergy();
    double getPEnergy();
    double getDiam();
    double getPeriod();
    double getSpd();
    ~Phyzxmodel();
    //remove copy and move constructors
    Phyzxmodel(Phyzxmodel const &) = delete;
    void operator=(Phyzxmodel const &that) = delete;
public slots:
    void setTht0(double t_z);
    void setRDens(double n_d);
    void setLen(double n_l);
    void setSpd(double n_s);
    void setDiam(double n_d);
    void setODens(double n_d);
    void setComp(COMPOUND n_c);
    void setDamp(double n_d);
    void currentTime(double t_a);
    ///our alpha and omega, gives us angle deviation from (0, length) line
    double getTheta();
    COMPOUND getComp();
private:
    RungeKutta4 *RK4Worker;
    QVector2D data;
    //QVector<QPoint> graph;
    double rod_density{-1}, rod_length{-1}, simulation_speed{-1},
    object_density{}, object_diameter{}, object_width{},
    theta_zero{}, theta_max{}, theta_current{}, damping_factor{},
    preserved_energy{}, kinetic_energy{}, swing_period{},
    damping_factor_liquid{}, rod_diameter{-1}, inertia_moment{};
    COMPOUND p_type;
    bool m_dirty = true, m_ready = false;
};

#endif // PHYZXMODEL_H
