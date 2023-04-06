#pragma once
#include "TC.h"

namespace TC{
    class Ground : public Transport {
protected:
        Ground(std::string name, int chill_count,int speed, int chill_time, int move_time, int distance, int time);
public:
        Ground(std::string name, int speed, int move_time, int distance);
    };
}