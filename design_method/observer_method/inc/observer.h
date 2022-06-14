//
// Created by XPS on 2022/6/14.
//

#ifndef DESIGN_METHOD_OBSERVER_H
#define DESIGN_METHOD_OBSERVER_H
#include <iostream>

class observer{
public:

    virtual void update() = 0;
};

class concrete_observer1 : public observer{
public:

    void update(){
        std::cout << " concrete_observer1 update" << std::endl;
    }
};
class concrete_observer2 : public observer{
public:

    void update(){
        std::cout << " concrete_observer2 update" << std::endl;
    }
};

#endif //DESIGN_METHOD_OBSERVER_H
