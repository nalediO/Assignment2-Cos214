#ifndef PIZZACOMPONENT_H
#define PIZZACOMPONENT_H


#include <string>

class PizzaComponent {

    public:
        virtual std::string getName()  = 0;
        virtual double getPrice()  = 0;
        virtual ~PizzaComponent();
    
};

#endif