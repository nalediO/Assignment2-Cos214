#ifndef DISCOUNTSTRATEGY_H
#define DISCOUNTSTRATEGY_H

class DiscountStrategy {
    public:
        virtual double applyDiscount(double price) = 0;
        virtual ~DiscountStrategy() = default;
};
#endif /* DISCOUNTSTRATEGY_H */