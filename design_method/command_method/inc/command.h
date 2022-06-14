//
// Created by XPS on 2022/6/14.
//

#ifndef DESIGN_METHOD_COMMAND_H
#define DESIGN_METHOD_COMMAND_H

#include <iostream>

class reciver{
public:

    void exe_c1(){
        std::cout << "exe c 1" << std::endl;
    }

    void exe_c2(){
        std::cout << "exe c 2" << std::endl;
    }
};

class command{
public:
    virtual void run(reciver* reciver_) = 0;
};

class command1 : public command{
public:
    void run(reciver* reciver_){
        std::cout << "command 1 " << std::endl;
        reciver_->exe_c1();
    }
};

class command2 : public command{
public:
    void run(reciver* reciver_){
        std::cout << "command 2 " << std::endl;
        reciver_->exe_c2();
    }
};
class invoker{

public:
    command* cmd;
    void set_command(command* cmd_){
        cmd = cmd_;
    }

    void runcmd(reciver* reciver_){
        cmd->run(reciver_);
    }

};



#endif //DESIGN_METHOD_COMMAND_H
