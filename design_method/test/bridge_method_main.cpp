//
// Created by XPS on 2022/6/14.
//

#include "pen.h"

int main(){

    color* red = new class red();
    color* blue = new class blue();

    //case 1
    pen* pen_a = new class pen_a();
    pen* pen_b = new class pen_b();

    pen_a->setcolor(red);
    pen_a->draw();

    pen_a->setcolor(blue);
    pen_a->draw();

    pen_b->setcolor(red);
    pen_b->draw();

    pen_b->setcolor(blue);
    pen_b->draw();

    return 0;
}