//
// Created by XPS on 2022/6/13.
//

#ifndef DESIGN_METHOD_DIRECTOR_H
#define DESIGN_METHOD_DIRECTOR_H
#include "builder.h"
class director{
public:
    builder* builder = nullptr;

    void set_builder(class builder* builder_){
        this->builder = builder_;
    }

    void full_Step(){
        builder->build_step1();
        builder->build_step2();
        builder->build_step3();
    }

};

#endif //DESIGN_METHOD_DIRECTOR_H
