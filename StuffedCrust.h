#ifndef StuffedCrust_h
#define StuffedCrust_h

#include "PizzaDecorator.h"

class StuffedCrust : public PizzaDecorator {
    private:
        double stuffedCrustPrice;

    public:
        StuffedCrust(Pizza* pizza);
        ~StuffedCrust() override;

        double getPrice() override;
        std::string getName() override;
        void printPizza() override;
};

#endif /* StuffedCrust_h */