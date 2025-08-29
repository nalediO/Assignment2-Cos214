#ifndef CONCRATESTATES_H
#define CONCRATESTATES_H

#include "OrderState.h"
#include <iostream>
#include "Order.h"

class PreparingState : public OrderState {
    public:
        void handleAction(Order* order) override;
        std::string getStateName() override;
        
};
class BakingState : public OrderState {
    public:
        void handleAction(Order* order) override;
        std::string getStateName() override;
        
};
class ReadyState : public OrderState {
    public:
        void handleAction(Order* order) override;
        std::string getStateName() override;
};
class collectedState : public OrderState {
    public:
        void handleAction(Order* order) override;
        std::string getStateName() override;
};


#endif /* CONCRATESTATES_H */