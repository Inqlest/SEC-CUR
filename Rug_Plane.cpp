#include "Rug_Plane.h"

namespace TC
{
        int Rug_Plane::get_ratio(int distance){
        int x;
        (distance < 1000) ? x = 0 : (distance < 5000 ? x = 0.03 : (distance < 10000 ? x = 0.1 : x=  0.05));
        return x;  
    }

    Rug_Plane::Rug_Plane(std::string name, int speed, int distance) : Air(name, speed, distance){
        distance = get_ratio(distance);
        time = distance / speed;
    }
} 