//
// Created by XPS on 2022/6/10.
//

#ifndef DESIGN_METHOD_CONCRETE_MOVIE_H
#define DESIGN_METHOD_CONCRETE_MOVIE_H
#include <iostream>
#include "movie_factory.h"
class chinese_movie_factory : public movie_factory{
public:
    movie* creat_movie() override{
        std::cout << " chinese movie " << std::endl;
        return new chinese_movie();
    }
};

class japan_movie_factory : public movie_factory{
public:
    movie* creat_movie() override{
        std::cout << " japan_movie_factory movie " << std::endl;
        return new japan_movie();
    }
};

#endif //DESIGN_METHOD_CONCRETE_MOVIE_H
