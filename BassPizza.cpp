#include "BassPizza.h"
#include "PizzaComponent.h"
#include <iostream>

    BassPizza::BassPizza(PizzaComponent* toppings, std::string name, double price): toppings(toppings),pizzaName(name), pizzaPrice(price) {};
    double BassPizza::getPrice() {
        return this->pizzaPrice + toppings->getPrice();
    };
    std::string BassPizza::getName() {
        return  this->pizzaName +"with (" + toppings->getName() + ")";
    };

    void BassPizza::printPizza() {
        std::cout << "Pizza Name: " << this->pizzaName << std::endl;
        std::cout << "Toppings: " << toppings->getName() << std::endl;
        std::cout << "Total Price: $" << this->getPrice() << std::endl;
    }

    BassPizza::~BassPizza() {
        std::cout << "BassPizza destroyed" << std::endl;
        // delete toppings;
        // toppings=nullptr;
    }