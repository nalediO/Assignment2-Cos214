#ifndef SPECIALSMENU_H
#define SPECIALSMENU_H

#include "Menu.h"
class SpecialsMenu : public Menu {
    public:
        SpecialsMenu(Observer* obs, Pizza* p) : Menu(obs, p) {}
        void notifyObservers(std::string message) override;
};
#endif /* SPECIALSMENU_H */