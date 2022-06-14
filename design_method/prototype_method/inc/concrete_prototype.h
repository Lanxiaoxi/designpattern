//
// Created by XPS on 2022/6/13.
//

#ifndef DESIGN_METHOD_CONCRETE_PROTOTYPE_H
#define DESIGN_METHOD_CONCRETE_PROTOTYPE_H
#include "prototype_interface.h"
class concrete_prototype : public prototype_interface{
public:
    int para1;
    //深拷贝实现克隆对象
    concrete_prototype* clone(){
        return new concrete_prototype(this->para1);
    }

    concrete_prototype(){

    }
    concrete_prototype(int para){
        this->para1 = para;
    }
};

#endif //DESIGN_METHOD_CONCRETE_PROTOTYPE_H
