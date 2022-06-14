//
// Created by XPS on 2022/6/14.
//

#include "handler.h"
int main(){

    handler1* handler1_ = new handler1();
    handler2* handler2_ = new handler2();

    handler1_->set_next(handler2_);
    handler1_->hand();


    return 0;
}
