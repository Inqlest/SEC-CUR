#include "Broom.h"

namespace TC
{   
    int Broom::get_ratio(int distance){
        int x = distance / 1000;
        return x*0.01;
    }
    
    Broom::Broom(std::string name, int speed, int distance) : Air(name, speed, distance){
        distance = get_ratio(distance);
        time = distance / speed;
    }
} 