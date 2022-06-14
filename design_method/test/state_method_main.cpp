//
// Created by XPS on 2022/6/14.
//

#include "state.h"

int main(){

    content content_;
    content_.current_state = new positive_state();
    content_.current_state->num = 10;
    content_.plus(10);

    content_.minus(100);


    return 0;
}