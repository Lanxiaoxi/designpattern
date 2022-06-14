//
// Created by XPS on 2022/6/13.
//

#include "../inc/single_instance.h"

// 静态变量instance初始化不要放在头文件中, 如果多个文件包含singleton.h会出现重复定义问题
single_instance* single_instance::instance = new single_instance();
