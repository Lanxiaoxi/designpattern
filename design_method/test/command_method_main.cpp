//
// Created by XPS on 2022/6/14.
//

#include "command.h"

int main(){

    invoker* invoker_ = new invoker();
    reciver* reciver_ = new reciver();

    command* cmd1 = new command1();
    command* cmd2 = new command2();

    invoker_->set_command(cmd1);
    invoker_->runcmd(reciver_);
    invoker_->set_command(cmd2);
    invoker_->runcmd(reciver_);



    return 0;
}