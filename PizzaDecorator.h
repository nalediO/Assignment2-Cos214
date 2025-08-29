#ifndef PizzaDecorator_h
#define PizzaDecorator_h
#include "Pizza.h"
#include <string>

class PizzaDecorator : public Pizza {

protected:
   Pizza* pizza; 

public:
    PizzaDecorator(Pizza* pizza);
    ~PizzaDecorator();
    virtual  double getPrice() override = 0 ;
    virtual std::string getName()  override = 0;
    virtual void printPizza() override = 0;
};


#endif /* PizzaDecorator_h */