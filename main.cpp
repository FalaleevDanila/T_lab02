#include <iostream>
#include <vector>
#include <cmath>
#include "includes/randomMethod.h"
#include "includes/display.h"


int main() {

    std::cout << std::endl;
    std::cout << std::endl;

    std::vector <double> n;
    Dispay::head();
    for(double q = 0.05; q <= 0.1; q += 0.005) {
        for (double p = 0.9; p < 1; p += 0.01) {
            n.push_back(RandomMethod::method(ceil(log(1. - p)/log(1. - q)),1));
        }
        Dispay::display(n,q,1);
        n.clear();
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    Dispay::head();
    for(double q = 0.05; q <= 0.1; q += 0.005) {
        for (double p = 0.9; p < 1; p += 0.01) {
            n.push_back(RandomMethod::method(logf((1. - p))/logf(1. - q),2));
        }
        Dispay::display(n,q,2);
        n.clear();
    }
    return 0;
}