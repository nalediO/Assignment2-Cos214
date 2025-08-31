
#include "concrateStates.h"
#include "Order.h"
#include <iostream>

void PreparingState::handleAction(Order* order) {
    std::cout << "The order is being prepared. Moving to the oven...\n";
    order->setState(new BakingState());
}
std::string PreparingState::getStateName() const { return "Preparing"; }

void BakingState::handleAction(Order* order) {
    std::cout << "The pizza is in the oven. It's getting crispy!\n";
    order->setState(new ReadyState());
}
std::string BakingState::getStateName() const { return "Baking"; }

void ReadyState::handleAction(Order* order) {
    std::cout << "The order is ready! Waiting for the customer...\n";
    order->setState(new CollectedState());
}
std::string ReadyState::getStateName() const { return "Ready for Pickup"; }

void CollectedState::handleAction(Order* order) {
    std::cout << "The order has been collected. Thank you!\n";
}
std::string CollectedState::getStateName() const { return "Collected"; }