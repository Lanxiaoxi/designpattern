//
// Created by XPS on 2022/6/14.
//

#include "publisher.h"


int main(){

    observer* ob1 = new concrete_observer1();
    observer* ob2 = new concrete_observer2();

    publisher* publisher_ =  new publisher();

    publisher_->add_ob(ob1);

    publisher_->notify();

    publisher_->add_ob(ob2);

    publisher_->notify();


    return 0;
}