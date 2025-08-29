#ifndef ORDERSTATE_H
#define ORDERSTATE_H
#include "Order.h"
#include "concrateStates.h"
#include <string>
class Order; // Forward declaration

class OrderState {
    public:
        virtual ~OrderState()  = default;
        virtual void handleAction(Order* order)  = 0;
        virtual std::string getStateName() = 0;
    };

#endif /* ORDERSTATE_H */
