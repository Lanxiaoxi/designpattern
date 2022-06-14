//
// Created by XPS on 2022/6/14.
//

#ifndef DESIGN_METHOD_PEN_H
#define DESIGN_METHOD_PEN_H

#include <iostream>
#include "color.h"
class pen{

public:
    color* color;
    virtual void draw() = 0;
    virtual void setcolor(class color* color_){
        color = color_;
    }

};

class pen_a : public pen{

    void draw(){
        std::cout << "pen a " << std::endl;
        color->dispcolor();
    }
};

class pen_b : public pen{

    void draw(){
        std::cout << "pen b " << std::endl;
        color->dispcolor();
    }
};

#endif //DESIGN_METHOD_PEN_H
