#include "Order.h"
#include <algorithm>
#include <iostream>

    Order::Order(DiscountStrategy* strategy){
        this->discountStrategy = strategy;
    };
    Order::~Order(){
        for (auto* pizza : pizzas) {
            delete pizza; 
        }
        delete discountStrategy;
    };
    void Order::addPizza(Pizza* pizza){
        pizzas.push_back(pizza);
    };
    void Order::removePizza(Pizza* pizza){
        
        auto it = std::find(pizzas.begin(), pizzas.end(), pizza);
        if (it != pizzas.end()) {
            pizzas.erase(it);
        } else {
            std::cerr << "Pizza not found in the order." << std::endl;
        }
    }
    double Order::calculateTotal() const{
        double total = 0.0;
        for (const auto& pizza : pizzas) {
            total += pizza->getPrice();
        }
        return total;
    }
    double Order::calculateOrderDiscount() const{
        double total = calculateTotalPrice();
        if (discountStrategy) {
            return discountStrategy->applyDiscount(total);
        }
        return 0.0; 
    }
    int Order::getPizzaCount() const{
        return pizzas->size();
    }
    void Order::setDiscountStrategy(DiscountStrategy* strategy){
        if (discountStrategy) {
            delete discountStrategy; 
        }
        discountStrategy = strategy;
    }
    void Order::displayOrder() const{
        std::cout << "Order Summary:" << std::endl;
        std::cout << "Number of Pizzas: " << getPizzaCount() << std::endl;
        std::cout << "Total Price: $" << calculateTotalPrice() << std::endl;
        std::cout << "Discount: $" << calculateOrderDiscount() << std::endl;
        std::cout << "Final Price: $" << (calculateTotalPrice() - calculateOrderDiscount()) << std::endl;
    }