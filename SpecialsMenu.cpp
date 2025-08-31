
#include "SpecialsMenu.h"

SpecialsMenu::SpecialsMenu() : Menu("Specials Menu") {

};

void SpecialsMenu::notifyObservers(std::string message) {
    for (Observer* obs : this->observer) {
        obs->update(message);
    }
};