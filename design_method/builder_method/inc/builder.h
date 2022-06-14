//
// Created by XPS on 2022/6/13.
//

#ifndef DESIGN_METHOD_BUILDER_H
#define DESIGN_METHOD_BUILDER_H
#include <iostream>

#include "product.h"

class builder {
public:


    virtual void build_step1() = 0;
    virtual void build_step2() = 0;
    virtual void build_step3() = 0;
    virtual product* get_product(){
        return this->productor;
    };
    virtual void reset(){
        this->productor = new product();
    }

protected:

    product* productor;


};


#endif //DESIGN_METHOD_BUILDER_H
