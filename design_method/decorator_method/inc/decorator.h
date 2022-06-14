//
// Created by XPS on 2022/6/14.
//

#ifndef DESIGN_METHOD_DECORATOR_H
#define DESIGN_METHOD_DECORATOR_H
#include "component.h"
#include <iostream>
class decorator : public component{
public:
    component* comp;

    decorator(component* comp_){
        this->comp = comp_;
    }

    decorator() {}

    void dosomething() override{
        comp->dosomething();
    }

};



#endif //DESIGN_METHOD_DECORATOR_H
