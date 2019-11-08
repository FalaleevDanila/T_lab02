//
// Created by danila on 02.10.2019.
//

#include <cstdio>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "../includes/randomMethod.h"
#include "../includes/function.h"

double RandomMethod::method(int n, size_t numberOfExpirement) {

    double result = 0;
    srand(time(NULL));
    if(numberOfExpirement==1) {
        for (int i = 0; i < n; i++) {
            double random = (rand() % 5000) / 1000. + 2;
            result = (Function::function1(random) < Function::function1(result)) ?
                     random : result;
            if (i == 0) {
                result = (rand() % 5000) / 1000. + 2;
            }
        }
    }
    else {
        for (int i = 0; i < n; i++) {
            double random = (rand() % 5000) / 1000. + 2;
            result = (Function::function2(random) < Function::function2(result)) ?
                     random : result;
            if (i == 0) {
                result = (rand() % 5000) / 1000. + 2;
            }
        }
    }
    return  result;
}