
#include "Pizza.h"
#include "PizzaDecorator.h"
#include <iostream>

    PizzaDecorator::PizzaDecorator(Pizza* pizza)
        : pizza(pizza) {};
    PizzaDecorator::~PizzaDecorator() = default;
    double PizzaDecorator::getPrice(){};
    std::string PizzaDecorator::getName(){};
    void PizzaDecorator::printPizza(){};