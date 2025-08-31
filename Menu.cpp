#include "Menu.h"


Menu::Menu(const std::string& name) : name(name) {
}

void Menu::addObserver(Observer* obs) {
    std::cout << "Observer added" << std::endl;
    this->observer.push_back(obs);
}

Menu::~Menu() {
    std::cout << "Menu destroyed" << std::endl;

    observer.clear();
    pizza.clear();

}

void Menu::removeObserver(Observer* obs) {
    if(observer.empty()) {
        std::cout << "No observers to remove" << std::endl;
        return;
    };
    this->observer.remove(obs);
}

void Menu::addPizza(Pizza* p) {
    std::cout << "Pizza added to menu: " << p->getName() << std::endl;
    this->pizza.push_back(p);
    notifyObservers("New pizza added to menu: " + p->getName() + " to " + this->name);
}

void Menu::removePizza(Pizza* p) {
    if(pizza.empty()) {
        std::cout << "No pizzas to remove" << std::endl;
        return;
    };
    this->pizza.remove(p);
    notifyObservers("Pizza removed from menu: " + p->getName() + " to " + this->name);
}

void Menu::notifyObservers(std::string message) {
    return;
}