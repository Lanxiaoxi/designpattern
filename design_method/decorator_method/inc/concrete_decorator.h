//
// Created by XPS on 2022/6/14.
//

#ifndef DESIGN_METHOD_CONCRETE_DECORATOR_H
#define DESIGN_METHOD_CONCRETE_DECORATOR_H

#include "decorator.h"

class concrete_decorator : public decorator{

public:
    void dosomething() override{
        this->comp->dosomething();
        std::cout << "decorator run" << std::endl;
    }

    concrete_decorator(component* comp){
        this->comp = comp;
    }
};

#endif //DESIGN_METHOD_CONCRETE_DECORATOR_H
