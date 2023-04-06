#include <iostream>
#include "Air.h"
#include "Ground.h"
#include "TC.h"
#include "Exception.h"


    void tc_register(int distance){
        int choice;
        std::cout << "1.Cross boots" << std::endl;
        std::cout << "2.Broom" << std::endl;
        std::cout << "3.Camel" << std::endl;
        std::cout << "4.Centaur" << std::endl;
        std::cout << "5.Eagle" << std::endl;
        std::cout << "6.Fast camel" << std::endl;
        std::cout << "7.Rug plane" << std::endl;
        std::cout << "0.End" << std::endl;

        switch (choice)
        {
        case 1: TC::Ground("Cross_boots", 6, 60, distance);
            break;
        case 2: TC::Air("Broom",20, distance);
            break;
        case 3: TC::Ground("Camel", 10, 30, distance);
            break;
        case 4: TC::Ground("Centaur", 15, 8, distance);
            break;
        case 5: TC::Air("Eagle", 8, distance);
            break;
        case 6: TC::Ground("Fast_camel", 40, 10, distance);
            break;
        case 7: TC::Air("Rug_plane", 10, distance);
            break;
        case 0:
            break;
        default:
            break;
        }
    }

int main() {
    int distance, selection, tc_count; 
    std::string type;
    std::cout << "Welcome" << std::endl;
    std::cout << "1.For ground transport only" << std::endl;
    std::cout << "2.For air transport only" << std::endl;
    std::cout << "3.Both types" << std::endl;
    std::cout << "Select race type " << std::endl;
    std::cin >> selection;
    switch (selection)
    {
    case 1:
    type = "Ground race";
        break;
    case 2:
    type = "Air race";
        break;
    case 3:
    type = "Both race";
        break;
    default:
        break;
    }
    std::cout << "Enter distance " << std::endl;
    std::cin >> distance;

    std::cout << "Minimun 2 vehicles " << "registered " << tc_count << std::endl;
    std::cout << type << " " << "Distance: " << distance << std::endl;

}