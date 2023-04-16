#pragma once
#include "Air.h"

namespace TC
{
    class Broom : public Air{
public:
        int get_ratio(int distance) override;
        Broom(std::string name, int speed, int distance);
    };
} 
