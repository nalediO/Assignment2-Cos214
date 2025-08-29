
#include "Pizza.h"
#include "PizzaDecorator.h"
#include <iostream>

    PizzaDecorator::PizzaDecorator(Pizza* pizza)
        : pizza(pizza) {};
    PizzaDecorator::~PizzaDecorator()= default;
    double PizzaDecorator::getPrice(){
        return 0.0;
    };
    std::string PizzaDecorator::getName(){
        return "";
    };
    void PizzaDecorator::printPizza(){
        return;
    };