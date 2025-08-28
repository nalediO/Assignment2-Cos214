#ifndef MENU_H
#define MENU_H

#include "Observer.h"
#include "Pizza.h"
#include <string>
class Menu{
    private:
        Observer* observer;
        Pizza* pizza;
    public:
        Menu(Observer* obs, Pizza* p) : observer(obs), pizza(p) {}
        void addObserver(Observer* obs);
        void removeObserver(Observer* obs);
        void addPizza(Pizza* p);
        virtual void notifyObservers(std::string message);


};

#endif