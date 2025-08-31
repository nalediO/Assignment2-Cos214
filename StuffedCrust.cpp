
#include "StuffedCrust.h"
#include <iostream>

    StuffedCrust::StuffedCrust(Pizza* pizza)
        : PizzaDecorator(pizza), 
        stuffedCrustPrice(2.50){};

    StuffedCrust::~StuffedCrust() = default;

    double StuffedCrust::getPrice() {
        return pizza->getPrice() + stuffedCrustPrice;
    };
    std::string StuffedCrust::getName() {
        return pizza->getName() + " with Stuffed Crust";
    };
    void StuffedCrust::printPizza() {
        std::cout << "Pizza Name: " << getName() << std::endl;
        std::cout << "Total Price: $" << getPrice() << std::endl;
        pizza->printPizza();
    };