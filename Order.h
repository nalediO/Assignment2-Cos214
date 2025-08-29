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
        OrderState* currentState;
        DiscountStrategy* discountStrategy;
        double totalPrice;
    public:
        Order();
        ~Order();

        void setState(OrderState* newState);
        void processOrder();
        std::string getStateName();

        void setDiscountStrategy(DiscountStrategy* strategy);
        double calculateTotal()const;
        double applyDiscount();
        double getFinalTotal() const;

        void addPizza(Pizza* pizza);
        void displayOrder() const;



};
#endif /* ORDER_H */
