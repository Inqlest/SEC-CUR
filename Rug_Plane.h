#pragma once
#include "Air.h"

namespace TC
{
    class Rug_Plane : public Air{
public:
        int get_ratio(int distance) override;
        Rug_Plane(std::string name, int speed, int distance);
    };
} 
