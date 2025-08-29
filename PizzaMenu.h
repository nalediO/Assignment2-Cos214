#ifndef PIZZAMENU_H
#define PIZZAMENU_H

#include "Menu.h"

class PizzaMenu : public Menu {
    public:
        PizzaMenu()=default;
        void notifyObservers(std::string message) override;
};

#endif