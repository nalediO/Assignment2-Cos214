#include "BulkDiscount.h"

double BulkDiscount::applyDiscount(double price) {
    if (price > 50.0) {
        return price * 0.90;
    }
    return price;
};