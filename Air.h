#pragma once
#include "TC.h"

namespace TC{
    class Air : public Transport {
protected:
        Air(std::string name, int speed, int chill_time, int move_time, int distance, int time);
public:
    
        Air(std::string name, int speed, int distance);
    };
}