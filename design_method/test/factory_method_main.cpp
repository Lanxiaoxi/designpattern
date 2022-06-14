#include "concrete_movie_factory.h"

int main() {
    int movie_type = 1;
    movie* my_movie = nullptr;
    if (movie_type == 0){
         my_movie = (new chinese_movie_factory())->creat_movie();

    } else{
         my_movie = (new japan_movie_factory())->creat_movie();
    }
    my_movie->play();
    return 0;
}
