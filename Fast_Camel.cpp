#include "Fast_Camel.h"

namespace TC
{
        int Fast_Camel::get_chilltime(int distance, std::string name, int count, int first, int second, int third){
        int time = 0;
        for(int i = 1; i <= count; i++){
            (i == 1) ? time += first : ((i == 2) ? time += second : time += third);
    }
    }


    Fast_Camel::Fast_Camel(std::string name, int speed, int move_time, int distance) : Ground(name, speed, move_time, distance){
     time = distance / speed;         
     chill_count = time / move_time;
     chill_time = get_chilltime(distance, name, chill_count, 5, 6.5, 8);
     this->time = time + chill_time;
    }
} 