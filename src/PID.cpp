#include "PID.h"
#include <iostream>
using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    this->Kp = Kp;
    this->Ki = Ki;
    this->Kd = Kd;
    this->p_error = 0.0;
    this->i_error = 0.0;
    this->d_error = 0.0;
}

void PID::UpdateError(double cte) {
    // Compute previous cte from previous proportional error term and and hyperparameter (p_error = Kp * cte;)   
    double pre_cte = p_error/Kp;
    // Compute accumulated cte by first computing the previous accumulated cte from integral error term and and hyperparameter (i_error = Ki * acc_cte;)and the adding the new cte  
    double acc_cte = (i_error/Ki) + cte;
    this->p_error = this->Kp * cte;
    this->i_error = this->Ki * acc_cte;
    this->d_error = this->Kd * (cte - pre_cte);
}

double PID::TotalError() {
    return p_error + i_error + d_error;
}

