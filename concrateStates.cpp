
// #include "concrateStates.h"

// void PreparingState::handleAction(Order* order) {
//     std::cout << "The order is being prepared. Moving to the oven...\n";
//     order->setState(new BakingState()); // Transition to the next state
// }

// void BakingState::handleAction(Order* order) {
//     std::cout << "The pizza is in the oven. It's getting crispy!\n";
//     order->setState(new ReadyState()); // Transition to the next state

//     // Example of a "backwards" transition logic:
//     // You could add a condition here, e.g., if the pizza gets burnt.
//     // if (pizzaBurnt) {
//     //     std::cout << "Oh no! The pizza burnt. Making a new one.\n";
//     //     order->setState(new PreparingState()); // Transition backwards
//     // } else {
//     //     order->setState(new ReadyState());
//     // }
// }

// void ReadyState::handleAction(Order* order) {
//     std::cout << "The order is ready! Waiting for the customer...\n";
//     order->setState(new CollectedState()); // Transition to the next state
// }

// void CollectedState::handleAction(Order* order) {
//     // Final state. No more transitions.
//     std::cout << "The order has been collected. Thank you!\n";
//     // The state remains CollectedState. handleAction() could print a message
//     // or do nothing if called again.
// }

#include "concrateStates.h"
#include "Order.h" // NOW we include the full definition of Order
#include <iostream>

// Implementations for PreparingState
void PreparingState::handleAction(Order* order) {
    std::cout << "The order is being prepared. Moving to the oven...\n";
    order->setState(new BakingState());
}
std::string PreparingState::getStateName() const { return "Preparing"; }

// Implementations for BakingState
void BakingState::handleAction(Order* order) {
    std::cout << "The pizza is in the oven. It's getting crispy!\n";
    order->setState(new ReadyState());
}
std::string BakingState::getStateName() const { return "Baking"; }

// Implementations for ReadyState
void ReadyState::handleAction(Order* order) {
    std::cout << "The order is ready! Waiting for the customer...\n";
    order->setState(new CollectedState());
}
std::string ReadyState::getStateName() const { return "Ready for Pickup"; }

// Implementations for CollectedState
void CollectedState::handleAction(Order* order) {
    std::cout << "The order has been collected. Thank you!\n";
    // Final state, no transition
}
std::string CollectedState::getStateName() const { return "Collected"; }