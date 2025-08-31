#include "PizzaMenu.h"
PizzaMenu::PizzaMenu() : Menu("Pizza Menu") {
};

void PizzaMenu::notifyObservers(std::string message) {

    for (Observer* obs : this->observer) {
        obs->update(message);
    }
}