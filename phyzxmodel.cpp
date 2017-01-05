#include "phyzxmodel.h"

Phyzxmodel::Phyzxmodel(double &theta_0){
    starting_sim_point = std::chrono::steady_clock::now();
    theta_zero = theta_0;
}
