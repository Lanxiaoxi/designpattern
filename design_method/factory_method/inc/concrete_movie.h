//
// Created by XPS on 2022/6/10.
//

#ifndef DESIGN_METHOD_CONCRETE_MOVIEE_H
#define DESIGN_METHOD_CONCRETE_MOVIEE_H
#include "movie.h"
#include <iostream>

class chinese_movie : public movie{
public:
    void play(){
        std::cout << "play chinese movie" << std::endl;
    }
};

class japan_movie : public movie{
public:
    void play(){
        std::cout << "play japan_movie " << std::endl;
    }
};



#endif //DESIGN_METHOD_CONCRETE_MOVIEE_H
