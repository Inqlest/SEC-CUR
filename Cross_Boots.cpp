#include "Cross_Boots.h"

namespace TC
{
        int Cross_Boots::get_chilltime(int distance, std::string name, int count, int first, int second, int third){
        int time = 0;
        for(int i = 1; i <= count; i++){
            (i == 1) ? time += first : time += second;
    }
    }
    
    Cross_Boots::Cross_Boots(std::string name, int speed, int move_time, int distance) : Ground(name, speed, move_time, distance){
     time = distance / speed;         
     chill_count = time / move_time;
     chill_time = get_chilltime(distance, name, chill_count, 10, 5, 0);
     this->time = time + chill_time;
    }
} 