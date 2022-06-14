//
// Created by XPS on 2022/6/14.
//

#ifndef DESIGN_METHOD_PUBLISHER_H
#define DESIGN_METHOD_PUBLISHER_H

#include "observer.h"
#include <vector>

class publisher{
public:
    std::vector<observer*> observer_vec;

    void add_ob(observer* observer_){
        observer_vec.push_back(observer_);
    }

    void notify(){
        std::cout <<"note"<< std::endl;
        for (auto it: observer_vec) {
            it->update();
        }
    }

};


#endif //DESIGN_METHOD_PUBLISHER_H
