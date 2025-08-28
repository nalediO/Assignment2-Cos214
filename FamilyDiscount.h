#ifndef FAMILYDISCOUNT_H
#define FAMILYDISCOUNT_H

#include "DiscountStrategy.h"
class FamilyDiscount : public DiscountStrategy {
    public:
        double applyDiscount(double price) override;
        ~FamilyDiscount() override = default;
};
#endif /* FAMILYDISCOUNT_H */