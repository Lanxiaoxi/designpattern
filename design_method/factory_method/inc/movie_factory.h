//
// Created by XPS on 2022/6/10.
//

#ifndef DESIGN_METHOD_MOVIE_FACTORY_H
#define DESIGN_METHOD_MOVIE_FACTORY_H


#include "concrete_movie.h"

class movie_factory{
public:
    virtual movie* creat_movie() = 0;
};

#endif //DESIGN_METHOD_MOVIE_FACTORY_H
