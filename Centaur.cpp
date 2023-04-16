#include "Centaur.h"

namespace TC
{
        int Centaur::get_chilltime(int distance, std::string name, int count, int first, int second, int third){
        int time = 0;
        for(int i = 1; i <= count; i++){
            time =+ first;
    }
    }

    Centaur::Centaur(std::string name, int speed, int move_time, int distance) : Ground(name, speed, move_time, distance){
     time = distance / speed;         
     chill_count = time / move_time;
     chill_time = get_chilltime(distance, name, chill_count, 2, 0, 0);
     this->time = time + chill_time;
    }
} 