//
// Created by XPS on 2022/6/14.
//

#ifndef DESIGN_METHOD_PROXY_H
#define DESIGN_METHOD_PROXY_H
#include "service.h"

class proxy : public service_interface{
public:
    service_interface* server;

    void do_service() override{
        std::cout << "proxy visit" << std::endl;
        server->do_service();
    }

    explicit proxy(service_interface* server_) : server(server_){}
};


#endif //DESIGN_METHOD_PROXY_H
