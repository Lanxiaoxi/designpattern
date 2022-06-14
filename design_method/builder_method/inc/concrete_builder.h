//
// Created by XPS on 2022/6/13.
//

#ifndef DESIGN_METHOD_CONCRETE_BUILDER_H
#define DESIGN_METHOD_CONCRETE_BUILDER_H


#include "builder.h"

class concrete_builder1 : public builder{
public:
    void build_step1(){
        std::cout << "builder 1 step 1" << std::endl;
        productor->step1 = 11;
    }
    void build_step2(){
        std::cout << "builder 1 step 2" << std::endl;
        productor->step2 = 12;

    }
    void build_step3(){
        std::cout << "builder 1 step 3" << std::endl;
        productor->step3 = 13;

    }

};

class concrete_builder2 : public builder{
public:
    void build_step1(){
        std::cout << "builder 2 step 1" << std::endl;
        productor->step1 = 21;

    }void build_step2(){
        std::cout << "builder 2 step 2" << std::endl;
        productor->step2 = 22;

    }void build_step3(){
        std::cout << "builder 2 step 3" << std::endl;
        productor->step3 = 23;

    }

};

#endif //DESIGN_METHOD_CONCRETE_BUILDER_H
