#pragma once
#include <iostream>

namespace TC{
    class Transport { 
protected:
        std::string name;
        int speed, chill_count, chill_time, move_time, distance, time;
        Transport(std::string name, int speed, int chill_count, int chill_time, int move_time, int distance, int time);
public:
    std::string get_name();
    int get_speed(); 
    int get_time();
    virtual int get_chilltime(int distance, std::string name, int count, int first, int second, int third); 
    virtual int get_ratio(int distance);
        Transport() : Transport("", 0, 0, 0, 0, 0, 0){};
    };
}