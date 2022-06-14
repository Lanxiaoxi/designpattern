//
// Created by XPS on 2022/6/14.
//

#include "concrete_decorator.h"
#include "concrete_component.h"

int main(){

    //动态绑定
    component* comp = new concrete_comp();
    decorator* deco = new concrete_decorator(comp);

    deco->dosomething();

    return 0;
}