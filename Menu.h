#ifndef MENU_H
#define MENU_H

#include "Observer.h"
#include "Pizza.h"
#include <string>
#include <list>
#include <iostream>
class Menu{
    private:
        // Observer* observer;
        std::list<Observer*> observer;
        // Pizza* pizza;
        std::list<Pizza*> pizza;
    public:
        Menu();
        ~Menu();
        void addObserver(Observer* obs);
        void removeObserver(Observer* obs);
        void addPizza(Pizza* p);
        void removePizza(Pizza* p);
        virtual void notifyObservers(std::string message)=0;


};

#endif