//
// Created by XPS on 2022/6/14.
//

#ifndef DESIGN_METHOD_SERVICE_H
#define DESIGN_METHOD_SERVICE_H
#include "service_interface.h"
#include <iostream>
class service : public service_interface{
public:
    void do_service(){
        std::cout << "do service" << std::endl;
    }
};


#endif //DESIGN_METHOD_SERVICE_H
