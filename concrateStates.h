#ifndef CONCRETESTATES_H
#define CONCRETESTATES_H

#include "OrderState.h" // Now this only gets the declaration of OrderState
#include "Order.h"
class PreparingState : public OrderState {
public:
    void handleAction(Order* order) override;
    std::string getStateName() const override;
};

class BakingState : public OrderState {
public:
    void handleAction(Order* order) override;
    std::string getStateName() const override;
};

class ReadyState : public OrderState {
public:
    void handleAction(Order* order) override;
    std::string getStateName() const override;
};

class CollectedState : public OrderState {
public:
    void handleAction(Order* order) override;
    std::string getStateName() const override;
};

#endif