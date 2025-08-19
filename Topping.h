
#ifndef TOPPINGS_H
#define TOPPINGS_H

#include "PizzaComponent.h"
#include <string>

class Topping: public PizzaComponent {

    private:
        std::string toppingName;
        double toppingPrice;

    public:
        Topping( std::string name, double price);
   
        std::string getName()   override;

        double getPrice()  override ;

        ~Topping() override = default;

};

#endif