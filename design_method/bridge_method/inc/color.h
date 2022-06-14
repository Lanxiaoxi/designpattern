//
// Created by XPS on 2022/6/14.
//

#ifndef DESIGN_METHOD_COLOR_H
#define DESIGN_METHOD_COLOR_H
#include <iostream>

class color {

public:

    virtual void dispcolor() = 0;

};
class red : public color{

public:

    void dispcolor(){
        std::cout << "red " << std::endl;
    };

};

class blue : public color{

public:

    void dispcolor(){
        std::cout << "blue " << std::endl;
    };

};


#endif //DESIGN_METHOD_COLOR_H
