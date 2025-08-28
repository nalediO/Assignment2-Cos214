#ifndef ORDER_H
#define ORDER_H

#include "Pizza.h"
#include "OrderState.h"
#include "DiscountStrategy.h"
#include <string>
#include <vector>

class Order{
    private:
        std::vector<Pizza*> items;
        OrderState* state;
        DiscountStrategy* discountStrategy;
        double totalPrice;
    public:
        Order(OrderState* initialState, DiscountStrategy* discountStrategy = nullptr);
        ~Order();
        void setState(OrderState* newState);
        std::string getStateName();
        void handleAction();
        double calculateTotal();
        void setDiscountStrategy(DiscountStrategy* strategy);
        double applyDiscount();

};
#endif /* ORDER_H */