#ifndef OBSERVER_H
#define OBSERVER_H

#include <string>

class Observer {
    public:
        Observer() = default; 
        virtual void update(std::string message) = 0; 
        virtual ~Observer() = default; 
};
#endif