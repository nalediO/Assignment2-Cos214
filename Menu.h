#ifndef MENU_H
#define MENU_H

#include "Observer.h"
#include "Pizza.h"
#include <string>
#include <list>
#include <iostream>
class Menu{
    protected:
        std::list<Observer*> observer;
        std::list<Pizza*> pizza;
        std::string name;
    public:
        Menu(const std::string& name);
        virtual ~Menu();
        void addObserver(Observer* obs);
        void removeObserver(Observer* obs);
        void addPizza(Pizza* p);
        void removePizza(Pizza* p);
        virtual void notifyObservers(std::string message)=0;


};

#endif