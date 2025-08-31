
#include "Topping.h"
#include <iostream>

    Topping::Topping( std::string name, double price)
        : toppingName(name), toppingPrice(price) {};

    std::string Topping::getName()  {
        return toppingName;
    };

    double Topping::getPrice()  {
        return toppingPrice;
    };

    Topping::~Topping() = default;
