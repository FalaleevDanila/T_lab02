//
// Created by danila on 02.10.2019.
//


#include "../includes/function.h"


double Function::function1(double x) {

    return 5.*cos(x) + x + sqrt(x);

}

double Function::function2(double x) {
    return Function::function1(x) * sin (x * 5.);
}