//
// Created by XPS on 2022/6/13.
//

#ifndef DESIGN_METHOD_SINGLE_INSTANCE_H
#define DESIGN_METHOD_SINGLE_INSTANCE_H

class single_instance{
private:
    static single_instance* instance;
    single_instance()= default;

public:
    static single_instance* get_instance(){
//        if (instance == nullptr){
//            return  new single_instance();
//        }
        return instance;
}

};

#endif //DESIGN_METHOD_SINGLE_INSTANCE_H
