#include "Ground.h"

namespace TC
{
    Ground::Ground(std::string name, int chill_count, int speed, int chill_time, int move_time, int distance, int time): Transport(name, speed, chill_count, chill_time, move_time, distance, time){}
    Ground::Ground(std::string name, int speed, int move_time, int distance) : Ground(name, speed, chill_count, chill_time, move_time, distance, time){
        time = distance / speed;
        chill_count = time / move_time;
        chill_time = get_chilltime(distance, name, chill_count);
        this->time = time + chill_time;
    }  
} 
