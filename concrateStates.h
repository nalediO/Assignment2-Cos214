#ifndef CONCRETESTATES_H
#define CONCRETESTATES_H

#include "OrderState.h" // Now this only gets the declaration of OrderState
// We DON'T include Order.h here to break the cycle

class PreparingState : public OrderState {
public:
    void handleAction(Order* order) override; // Declaration
    std::string getStateName() const override; // Declaration
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