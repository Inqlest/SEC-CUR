#pragma once
#include "Ground.h"

namespace TC
{
    class Centaur : public Ground{
public:
        int get_chilltime(int distance, std::string name, int count, int first, int second, int third) override;
        
        Centaur(std::string name, int speed, int move_time, int distance);
    };
} 
