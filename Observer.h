#ifndef OBSERVER_H
#define OBSERVER_H

#include <string>

class Observer {
    public:
        Observer(); 
        virtual void update(std::string message) = 0; 
        virtual ~Observer(); 
};
#endif