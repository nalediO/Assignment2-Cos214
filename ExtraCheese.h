
#ifndef EXTRA_CHEESE_H
#define EXTRA_CHEESE_H


#include "PizzaDecorator.h"

class ExtraCheese : public PizzaDecorator {
private:
    double extraCheesePrice;    
public:
    ExtraCheese(Pizza* pizza);
    ~ExtraCheese() override = default;
    double getPrice() override;
    std::string getName() override;
    void printPizza() override;
    
};

#endif /* EXTRA_CHEESE_H */

