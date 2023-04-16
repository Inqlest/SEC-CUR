#include "Eagle.h"

namespace TC
{
    int Eagle::get_ratio(int distance){
        int x = 6;
        return x*0.01;
    }
    Eagle::Eagle(std::string name, int speed, int distance) : Air(name, speed, distance){
        distance = get_ratio(distance);
        time = distance / speed;
    }
} 