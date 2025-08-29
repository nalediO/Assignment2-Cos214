#include "concrateStates.h"
#include "Order.h"

void BakingState::handleAction(Order* order) {
    std::cout << "Order is now Baking." << std::endl;
    // Transition to the next state
    order->setState(new ReadyState());

}
std::string BakingState::getStateName() {
    return "Baking";
}