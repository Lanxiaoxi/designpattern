//
// Created by XPS on 2022/6/14.
//

#ifndef DESIGN_METHOD_HANDLER_H
#define DESIGN_METHOD_HANDLER_H

#include <iostream>

class handler{
public:

    virtual void set_next(handler* handler_) = 0;

    virtual void hand() = 0;
};


class basehandler :public handler{

public:
    handler* next_handler;
public:
    void set_next(handler* handler_){
        next_handler = handler_;
    }

    bool have_next(){
        if (next_handler != nullptr){
            return true;
        }
        return false;
    }

    void hand(){

    };

};

class handler1:public basehandler{
public:
    void hand(){
        std::cout << "chain 1" << std::endl;
        if (!have_next()){
            return;
        } else{
            next_handler->hand();
        }

    }
};

class handler2:public basehandler{
public:
    void hand(){
        std::cout << "chain 2" << std::endl;
        if (!have_next()){
            return;
        } else{
            next_handler->hand();
        }
    }
};



#endif //DESIGN_METHOD_HANDLER_H
