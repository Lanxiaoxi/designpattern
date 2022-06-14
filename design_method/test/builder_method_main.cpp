//
// Created by XPS on 2022/6/13.
//
#include "director.h"
#include "concrete_builder.h"
int main(){

    director director_ ;
    product* product_;
    builder* builder_ = nullptr;

    //1
    builder_ = new concrete_builder1();
    director_.set_builder(builder_);
    builder_->reset();
    director_.full_Step();
    product_ = builder_->get_product();
    product_->info();

    //2
    builder_ = new concrete_builder2();
    builder_->reset();
    director_.set_builder(builder_);
    director_.full_Step();
    product_ = builder_->get_product();
    product_->info();
    return 0;
}
