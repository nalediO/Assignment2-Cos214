#ifndef BassPizza_h
#define BassPizza_h

#include "PizzaComponent.h"
#include "Pizza.h"
#include <string>

class BassPizza : public Pizza{
private:
    PizzaComponent* toppings;
    std::string pizzaName;
    double pizzaPrice;  
public:
    BassPizza(PizzaComponent* toppings, std::string name, double price);
    ~BassPizza();
    double getPrice() override;
    std::string getName() override;
    void printPizza() override ;
};

#endif /* BassPizza_h */