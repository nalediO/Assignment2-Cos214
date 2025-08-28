#ifndef OBSERVER_H
#define OBSERVER_H

class Observer {
    public:
        Observer() = default; // Default constructor
        virtual void update() = 0; // Pure virtual function
        virtual ~Observer() = default; // Virtual destructor
};
#endif