//
// Created by danila on 02.10.2019.
//

#include <iostream>
#include "../includes/display.h"
#include "../includes/function.h"
#include <iomanip>

void Dispay::head() {
    std::cout << "   \\ P ||  " ;
    for(double p = 0.9; p < 1; p += 0.01){
        std::cout<<std::setw(7) << p << "    || " ;
    }
    std::cout << std::endl << "  q \\  ||" << std::endl<<"______";
    for(double p = 0.9; p <= 1.01; p += 0.01){
        std::cout<< "____________" ;
    }
    std::cout << std::endl;
}

void Dispay::display(std::vector<double> const &numbers, double const &q, int numberOfExpirement) {
    std::cout << " " << std::setw(5)<< q << " || " << " ";
    if(numberOfExpirement==1) {
        for (auto &i: numbers) {
            std::cout << " " << std::setw(9) << Function::function1(i) << " || " ;
        }
    }
    else {
        for (auto &i: numbers) {
            std::cout << " " << std::setw(9) << Function::function2(i) << " || ";
        }
    }
    std::cout << std::endl;
}