#ifndef REGULARPRICE_H
#define REGULARPRICE_H

#include "DiscountStrategy.h"

class RegularPrice : public DiscountStrategy {
    public:
        double applyDiscount(double price) override;
        ~RegularPrice() override = default;
};
#endif /* REGULARPRICE_H */