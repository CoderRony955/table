#include <iostream>
#include <string>
#include <stdexcept>
#include <algorithm>
#include <ios>
#include <iomanip>

#define TEXT_COLOR "\033[36m"
#define BOLD_TXT "\033[1m"
#define RESET_TXT "\033[0m"

void before_formatting(std::string title, std::string row1, std::string row2, std::string row3)
{
    std::cout << "Before table formatting" << std::endl
              << std::endl;

    std::cout << " " << title << " " << std::endl;

    std::cout << BOLD_TXT << row1 << " " << row2 << " " << row3 << RESET_TXT << std::endl;
    std::cout << BOLD_TXT << "SURESH" << " " << "KUMAR" << " " << "45" << RESET_TXT << std::endl;
    std::cout << BOLD_TXT << "RAMESH" << " " << "SINGH" << " " << "34" << RESET_TXT << std::endl;
    std::cout << BOLD_TXT << "RAJU" << " " << "SINGH" << " " << "32" << RESET_TXT << std::endl;
    std::cout << BOLD_TXT << "BHOLA" << " " << "SINGH" << " " << "89" << RESET_TXT << std::endl;
}

void after_formatting(std::string title, std::string row1, std::string row2, std::string row3)
{
    std::cout << "After table formatting" << std::endl
              << std::endl;
    
    
    std::cout << std::setw(20) << title << std::setw(20) << std::endl;
    std::cout << std::setw(10) << row1 << std::setw(10) << row2 << std::setw(10) << row3 << std::setw(10) << std::endl;

    std::cout << TEXT_COLOR << std::setw(5) << "SURESH" << std::setw(10) << "SINGH" << std::setw(10) << "30" << std::endl;
    std::cout << TEXT_COLOR << std::setw(10) << "RAMESH" << std::setw(10) << "SINGH" << std::setw(10) << "56" << std::endl;
    std::cout << TEXT_COLOR << std::setw(10) << "BOLA" << std::setw(10) << "KUMAR" << std::setw(10) << "45" << std::endl;
    std::cout << TEXT_COLOR << std::setw(10) << "RAJU" << std::setw(10) << "SINGH" << std::setw(10) << "87" << std::endl;
}

int main(int argc, char const *argv[])
{
    std::string title = "test table";

    std::string row1 = "First name"; 
    std::string row2 = "Last name"; 
    std::string row3 = "No."; 

    before_formatting(title, row1, row2, row3);
    after_formatting(title, row1, row2, row3);

    return 0;
}
