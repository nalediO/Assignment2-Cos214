#ifndef ORDER_H
#define ORDER_H

#include "Pizza.h"
#include "OrderState.h"
#include "DiscountStrategy.h"
#include <string>
#include <vector>

class Order{
    private:
        std::vector<Pizza*> pizzas;
        OrderState* state;
        DiscountStrategy* discountStrategy;
        double totalPrice;
    public:
        Order(OrderState* initialState, DiscountStrategy* discountStrategy = nullptr);
        ~Order();
        void setState(OrderState* newState);
        std::string getStateName();
        void handleAction();
        double calculateTotal()const;
        void setDiscountStrategy(DiscountStrategy* strategy);
        double applyDiscount();

};
#endif /* ORDER_H */

// #ifndef Order_h
// #define Order_h

// #include <string>
// #include <DiscountStrategy.h>
// #include <vector>
// #include "Pizza.h"

// class Order {

// private:
//     std::vector<Pizza*> pizzas;
//     DiscountStrategy* discountStrategy;

// public:

//     Order(DiscountStrategy* strategy);
//     ~Order();
//     void addPizza(Pizza* pizza);
//     void removePizza(Pizza* pizza);
//     double calculateTotalPrice() const;
//     double calculateOrderDiscount() const;
//     int getPizzaCount() const;
//     void setDiscountStrategy(DiscountStrategy* strategy);
//     void displayOrder() const;

// };

// #endif /* Order_h */