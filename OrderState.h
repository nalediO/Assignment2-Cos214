#ifndef ORDERSTATE_H
#define ORDERSTATE_H
#include "Order.h"

class OrderState {
    public:
        virtual void handleOrder() = 0;
        virtual ~OrderState() = default;
};

#endif /* ORDERSTATE_H */
