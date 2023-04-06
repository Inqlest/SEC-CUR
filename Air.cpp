#include "Air.h"

namespace TC
{
    Air::Air(std::string name, int speed, int chill_time, int move_time, int distance, int time): Transport(name, speed, chill_count, chill_time, move_time, distance, time){}
    Air::Air(std::string name, int speed, int distance) : Air(name, speed, chill_time, move_time, distance, time){
        distance = get_ratio(name, distance);
        time = distance / speed;
    }  
} 
