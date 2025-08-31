
#include "ToppingGroup.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
// using namespace std;


ToppingGroup::ToppingGroup(std::string name)
    : toppingGName(name) {};

void ToppingGroup::add(PizzaComponent* component){
    toppingsList.push_back(component);
};

void ToppingGroup::remove(PizzaComponent* component) {
    auto it = std::find(toppingsList.begin(), toppingsList.end(), component);
    if (it != toppingsList.end()) {
        toppingsList.erase(it);
    } else {
        std::cerr << "Component not found in the group." << std::endl;
    }
};


std::string ToppingGroup::getName() {

    std::ostringstream oss;
    oss << toppingGName << " (";
    for (size_t i = 0; i < toppingsList.size(); ++i) {
        if (i != 0) oss << ", ";
        oss << toppingsList[i]->getName();
    }
    oss << ")";
    return oss.str();
}

double ToppingGroup::getPrice() {
    
    double totalPrice = 0;
    for (const auto& topping : toppingsList) {
        totalPrice += topping->getPrice();
    }
    return totalPrice;
};

ToppingGroup::~ToppingGroup(){
    for(auto* topping : toppingsList) {
        delete topping; 
        topping = nullptr;
    }
}