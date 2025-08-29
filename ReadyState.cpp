#include "concrateStates.h"

void ReadyState::handleAction(Order* order) {
    std::cout << "Order is now ready." << std::endl;
    order->setState(new collectedState());
    // Transition to the next state
    // order->setState(new ReadyState());
}
std::string ReadyState::getStateName() {
    return "Ready for Pickup";
}