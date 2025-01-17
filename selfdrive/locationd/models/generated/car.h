#pragma once
#include "rednose/helpers/common_ekf.h"
extern "C" {
void car_update_25(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_24(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_30(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_26(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_27(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_29(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_28(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_31(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_err_fun(double *nom_x, double *delta_x, double *out_4357349640118668261);
void car_inv_err_fun(double *nom_x, double *true_x, double *out_1126178887815320573);
void car_H_mod_fun(double *state, double *out_7323184606116964341);
void car_f_fun(double *state, double dt, double *out_1959300645020303815);
void car_F_fun(double *state, double dt, double *out_4766937505185307902);
void car_h_25(double *state, double *unused, double *out_2746693973836595354);
void car_H_25(double *state, double *unused, double *out_5786110295815758105);
void car_h_24(double *state, double *unused, double *out_3040119791267470643);
void car_H_24(double *state, double *unused, double *out_2371818783672703645);
void car_h_30(double *state, double *unused, double *out_5134578676917453831);
void car_H_30(double *state, double *unused, double *out_1258413965688149907);
void car_h_26(double *state, double *unused, double *out_4531262792240976314);
void car_H_26(double *state, double *unused, double *out_2044606976941701881);
void car_h_27(double *state, double *unused, double *out_3690203826738257789);
void car_H_27(double *state, double *unused, double *out_916349346112275004);
void car_h_29(double *state, double *unused, double *out_5284052014821942848);
void car_H_29(double *state, double *unused, double *out_1768645310002542091);
void car_h_28(double *state, double *unused, double *out_8357498729557444681);
void car_H_28(double *state, double *unused, double *out_3732275581567868342);
void car_h_31(double *state, double *unused, double *out_6384143502090617704);
void car_H_31(double *state, double *unused, double *out_1418398874708350405);
void car_predict(double *in_x, double *in_P, double *in_Q, double dt);
void car_set_mass(double x);
void car_set_rotational_inertia(double x);
void car_set_center_to_front(double x);
void car_set_center_to_rear(double x);
void car_set_stiffness_front(double x);
void car_set_stiffness_rear(double x);
}