//
// Created by XPS on 2022/6/14.
//

#ifndef DESIGN_METHOD_STATE_H
#define DESIGN_METHOD_STATE_H

class content;
class state{

public:
    int num;
    content* content_;


    virtual void plus(int a){
        num += a;
    };
    virtual void minus(int a){
        num -= a;
    };
    virtual void update_state() = 0;
};

class content{
public:
    state* current_state;

    content(){}

    void plus(int a){
        current_state->plus(a);
        current_state->update_state();
    }

    void minus(int a){
        current_state->minus(a);
        current_state->update_state();
    }

};
class nagetive_state :public state{
    void update_state() override{
        if (num >= 0){
            content_ = new content();
//            content_->current_state = new positive_state();
            return;
        }

    }
};

class positive_state :public state{
public:
    void update_state() override{
        if (num < 0){
            content_ = new content();
            content_->current_state = new nagetive_state();
            return;
        }

    }

};




#endif //DESIGN_METHOD_STATE_H
