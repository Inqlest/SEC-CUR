#include "TC.h"

namespace TC {
    std::string Transport::get_name(){return name;}
    int Transport::get_speed(){return speed;} 
    int Transport::get_time(){return time;} 
    

    int Transport::get_namenumber(std::string name){
        if (name == "Camel"){return 1;}
        else if(name == "Fast_camel") {return 2;}
        else if(name == "Centaur"){return 3;}
        else if(name == "Cross_boots"){return 4;}
        else if(name == "Rug_plane"){return 5;}
        else if(name == "Eagle"){return 6;}
        else if(name == "Broom"){return 7;}
    }

    int Transport::get_chilltime(int distance, std::string name, int count){
        int x = get_namenumber(name);
        int time = 0;
        for(int i = 1; i <= count; i++){
        switch (x)
        {
        case 1:
            i == 1 ? time += 5 : time += 8;
            break;
        case 2:
            (i == 1) ? time += 5 : ((i == 2) ? time += 6.5 : time += 8);
            break;
        case 3:
            time += 2;
            break;
        case 4:
            i == 1 ? time += 10 : time += 5;
            break;
        default: time = 0;
            break;
        }
        return time;
        }
    }

    int Transport::get_ratio(std::string name, int distance){
        int x = get_namenumber(name);
        int percent(0);
        switch (x)
        {
        case 5:
        (distance < 1000) ? percent = 0 : (distance < 5000 ? percent = 0.03 : (distance < 10000 ? percent = 0.1 : percent=  0.05));
            break;
        case 6:
        percent = 0.06;
            break;
        case 7:
        percent = (distance / 1000)*0.01;
            break;
        default: percent = 1;
            break;
        }

        distance = distance *(1 - percent);
        return distance;
    }

    Transport::Transport(std::string name, int speed, int chill_count, int chill_time, int move_time, int distance, int time){
    this->name = name;
    this->speed = speed;
    this->chill_time = chill_time;
    this->move_time = move_time;
    this->distance = distance;
    this->time = time;
}
}