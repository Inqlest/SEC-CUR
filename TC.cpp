#include "TC.h"

namespace TC {
    std::string Transport::get_name(){return name;}
    int Transport::get_speed(){return speed;} 
    int Transport::get_time(){return time;} 
    
    int Transport::get_chilltime(int distance, std::string name, int count, int first, int second, int third){}
    int Transport::get_ratio(int distance){}

    Transport::Transport(std::string name, int speed, int chill_count, int chill_time, int move_time, int distance, int time){
    this->name = name;
    this->speed = speed;
    this->chill_time = chill_time;
    this->move_time = move_time;
    this->distance = distance;
    this->time = time;
}
}