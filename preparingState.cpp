#include "concrateStates.h"

void PreparingState::handleAction(Order* order) {
    std::cout << "Order is now Preparing." << std::endl;

    // Transition to the next state
    order->setState(new BakingState());
}
std::string PreparingState::getStateName() {
    return "Preparing";
}