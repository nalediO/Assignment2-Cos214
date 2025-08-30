#ifndef ORDERSTATE_H
#define ORDERSTATE_H
#include "Order.h"
#include <string>

class Order;

class OrderState {
public:
    virtual ~OrderState() = default;
    virtual void handleAction(Order* order) = 0;
    virtual std::string getStateName() const = 0;
};

#endif /* ORDERSTATE_H */
