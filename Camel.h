#pragma once
#include "Ground.h"

namespace TC
{
    class Camel : public Ground{
public:
        int get_chilltime(int distance, std::string name, int count, int first, int second, int third) override;
        Camel(std::string name, int speed, int move_time, int distance);
    };
} 
