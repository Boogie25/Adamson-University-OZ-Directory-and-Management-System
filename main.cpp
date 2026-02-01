#include <iostream>
#include <limits>
#include "oz_lib.h"

int main() {
    int choice;
    bool running = true;

    while (running) {
        std::cout << "\n====================================" << std::endl;
        std::cout << "   EMERGENCY EVACUATION PLAN SYSTEM   " << std::endl;
        std::cout << "======================================" << std::endl;
        std::cout << "1. OZ Building" << std::endl;
        std::cout << "2. ST Building (Coming Soon)" << std::endl;
        std::cout << "3. CS Building (Coming Soon)" << std::endl;
        std::cout << "4. SV Building (Coming Soon)" << std::endl;
        std::cout << "6. FRC Building (Coming Soon)" << std::endl;
        std::cout << "7. Libraries (Coming Soon)" << std::endl;
        std::cout << "8. Exit Program" << std::endl;
        std::cout << "Select option: ";

        if (!(std::cin >> choice)) {
            std::cout << "\nInvalid input. Please enter a number.\n" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        switch (choice) {
            case 1:
                oz_building_submenu();
                break;
            case 8:
                std::cout << "Exiting program. Goodbye and stay safe!" << std::endl;
                running = false;
                break;
            default:
                std::cout << "Invalid choice. Please choose 1 or 8." << std::endl;
                break;
        }
    }
    return 0;
}