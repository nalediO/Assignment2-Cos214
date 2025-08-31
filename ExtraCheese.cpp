
#include "ExtraCheese.h"
#include <iostream>

    ExtraCheese::ExtraCheese(Pizza* pizza)
    :PizzaDecorator(pizza),
    extraCheesePrice(1.50) {};
    ExtraCheese::~ExtraCheese(){
        std::cout << "ExtraCheese decorator destroyed" << std::endl;
        delete pizza;
        pizza=nullptr;
        
    };
    double ExtraCheese::getPrice() {
        return pizza->getPrice() + extraCheesePrice;
    };
    std::string ExtraCheese::getName()  {
        return pizza->getName() + " with Extra Cheese";
    };
    void ExtraCheese::printPizza() {
        std::cout << "Pizza Name: " << getName() << std::endl;
        std::cout << "Total Price: $" << getPrice() << std::endl;
        pizza->printPizza();
    };