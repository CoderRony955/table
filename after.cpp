#include <iostream>
#include <string>
#include <stdexcept>
#include <algorithm>
#include <ios>
#include <iomanip>

#define TEXT_COLOR "\033[36m"
#define BOLD_TXT "\033[1m"
#define RESET_TXT "\033[0m"


void after_formatting(std::string title, std::string row1, std::string row2, std::string row3)
{
    std::cout << "After table formatting" << std::endl
              << std::endl;
    
    
    std::cout << std::setw(20) << title << std::setw(20) << std::endl;
    std::cout << std::setw(10) << row1 << std::setw(10) << row2 << std::setw(10) << row3 << std::setw(10) << std::endl;

    std::cout << TEXT_COLOR << std::setw(5) << "SURESH" << std::setw(10) << "KUMAR" << std::setw(10) << "50" << std::endl;
    std::cout << TEXT_COLOR << std::setw(10) << "RAMESH" << std::setw(10) << "SINGH" << std::setw(10) << "33" << std::endl;
    std::cout << TEXT_COLOR << std::setw(10) << "BOLA" << std::setw(10) << "SINGH" << std::setw(10) << "80" << std::endl;
    std::cout << TEXT_COLOR << std::setw(10) << "RAJU" << std::setw(10) << "SINGH" << std::setw(10) << "89" << std::endl;
}

int main(int argc, char const *argv[])
{
    std::string title = "test table";

    std::string row1 = "First name"; 
    std::string row2 = "Last name"; 
    std::string row3 = "No."; 

  
    after_formatting(title, row1, row2, row3);

    return 0;
}
