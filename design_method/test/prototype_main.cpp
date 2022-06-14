//
// Created by XPS on 2022/6/13.
//
#include "concrete_prototype.h"
#include <iostream>
int main(){

    concrete_prototype* instance = new concrete_prototype(2);

    concrete_prototype* instance_clone = instance->clone();

    std::cout << instance->para1 << " " << instance_clone->para1 << std::endl;


    return 0;
}