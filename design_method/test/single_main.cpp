//
// Created by XPS on 2022/6/13.
//
#include "single_instance.h"
#include <iostream>

//基于饿汉单例实现
int main(){

    single_instance* instance = single_instance::get_instance();
    single_instance* instance1 = single_instance::get_instance();

    std::cout << instance << " " << instance1 << std::endl;
    return 0;
}
