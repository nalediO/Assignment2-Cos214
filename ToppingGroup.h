#ifndef TOPPING_H
#define TOPPING_H

#include "PizzaComponent.h"
#include <string>
#include <vector>

class ToppingGroup : public PizzaComponent {

    private:
        std::string toppingGName;
        std::vector<PizzaComponent*> toppingsList;

    public:
        ToppingGroup(std::string name);

        void add(PizzaComponent* component);

        void remove(PizzaComponent* component);

        std::string getName() override;

        double getPrice() override;

        ~ToppingGroup();

};
#endif
