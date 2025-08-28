#ifndef BULKDISCOUNT_H
#define BULKDISCOUNT_H

#include "DiscountStrategy.h"
class BulkDiscount : public DiscountStrategy {
    public:

        double applyDiscount(double price) override;
        ~BulkDiscount() override = default;
};
#endif /* BULKDISCOUNT_H */