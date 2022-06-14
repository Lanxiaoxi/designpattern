//
// Created by XPS on 2022/6/14.
//

#ifndef DESIGN_METHOD_CONCRETE_COMPONENT_H
#define DESIGN_METHOD_CONCRETE_COMPONENT_H
#include "component.h"
#include <iostream>
class concrete_comp : public component{
public:

    void dosomething(){
        std::cout << "concrete_comp run" << std::endl;
    }

};

#endif //DESIGN_METHOD_CONCRETE_COMPONENT_H
