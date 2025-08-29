#ifndef backingstats_H
#define balignstate_H

#include "OrderState.h"

class BakingState : public OrderState {
    public:
        
        ~BakingState() override = default;
        BakingState(Order* order);


};
#endif /* BAKINGSTATE_H */