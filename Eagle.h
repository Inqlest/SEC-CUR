#pragma once
#include "Air.h"

namespace TC
{
    class Eagle : public Air{
public:
        int get_ratio(int distance) override;
        Eagle(std::string name, int speed, int distance);
    };
} 