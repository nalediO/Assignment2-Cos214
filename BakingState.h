#ifndef BAKINGSTATE_H
#define BAKINGSTATE_H

#include "OrderState.h"

class BakingState : public OrderState {
    public:
        
        ~BakingState() override = default;
        BakingState(Order* order);


};
#endif /* BAKINGSTATE_H */