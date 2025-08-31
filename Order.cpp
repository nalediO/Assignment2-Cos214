#include "Order.h"
#include <iostream>
// #include "OrderState.h"
#include "concrateStates.h"

Order::Order() : currentState(nullptr), discountStrategy(nullptr), totalPrice(0.0) {
    std::cout << "Order created" << std::endl;
    currentState=new PreparingState(); 
}

Order::~Order() {
    std::cout << "Order destroyed" << std::endl;
    for (Pizza* p : items) {
        if(p!=nullptr) {
            std::cout << "Deleting pizza: " << p->getName() << std::endl;
            delete p;
            p=nullptr;
        }
    }
    // items.clear(); 

    std::cout << "All pizzas in the order have been deleted." << std::endl;
    delete currentState;
    currentState = nullptr;
    delete discountStrategy;
    discountStrategy = nullptr;
}

void Order::setState(OrderState* newState) {
    if (currentState!=nullptr) {
        delete currentState;
    }
    currentState = newState;
}

void Order::processOrder() {
    if (currentState) {
        currentState->handleAction(this);
    } else {
        std::cerr << "No current state set for the order." << std::endl;
    }
}

std::string Order::getStateName()const {
    if (currentState) {
        return currentState->getStateName();
    }
    return "No State";
}

void Order::setDiscountStrategy(DiscountStrategy* strategy) {
    if (discountStrategy) {
        delete discountStrategy;
    }
    discountStrategy = strategy;
}

double Order::calculateTotal() const {
    double total = 0.0;
    for (const auto& item : items) {
        total += item->getPrice();
    }
    return total;
}

double Order::applyDiscount() const {
    if (discountStrategy) {
        return discountStrategy->applyDiscount(calculateTotal());
    }
    return calculateTotal();
}

double Order::getFinalTotal() const {
    return totalPrice;
}
void Order::addPizza(Pizza* pizza) {

    // std::cout <<"\n======== Your Order ========\n"<< std::endl;
    // for(Pizza* p : items) {
    //     p->printPizza();
    //     std::cout << "Price: $" << p->getName()<<" R "<< pizza->getPrice() << std::endl;
    // }
    items.push_back(pizza);
    totalPrice = applyDiscount();

    // std::cout << "\n============================\n"<< std::endl;
    // std::cout<<"Subtotal: R "<< (calculateTotal()-applyDiscount())<< std::endl;
    // std::cout<<"Discounted Total: R "<< applyDiscount() << std::endl;
    // std::cout<<"State: "<< getStateName() << std::endl;
    // std::cout <<"\n============================\n"<< std::endl;

}

void Order::displayOrder() const {
    if (items.empty()) {
        std::cout << "Your order is empty." << std::endl;
        return;
    }
    std::cout << "\n======== Your Order ========\n" << std::endl;
    for (const auto& pizza : items) {
        pizza->printPizza();
        std::cout << "Price: R " << pizza->getPrice() << std::endl;

    }
    std::cout << "\n============================\n" << std::endl;
    std::cout << "Subtotal: R " << calculateTotal() << std::endl;
    std::cout << "Discounted Total: R " << applyDiscount() << std::endl;
    std::cout << "State: " << getStateName() << std::endl;
    std::cout << "\n============================\n" << std::endl;


}