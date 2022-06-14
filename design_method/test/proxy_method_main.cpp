//
// Created by XPS on 2022/6/14.
//
#include "proxy.h"
int main(){


    service_interface* server = new service();
    proxy* proxy_ = new proxy(server);

    proxy_->do_service();

    return 0;
}