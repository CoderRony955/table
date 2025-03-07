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
    std::cout << BOLD_TXT << "SURESH" << " " << "KUMAR" << " " << "10" << RESET_TXT << std::endl;
    std::cout << BOLD_TXT << "RAMESH" << " " << "SINGH" << " " << "34" << RESET_TXT << std::endl;
    std::cout << BOLD_TXT << "RAJU" << " " << "SINGH" << " " << "67" << RESET_TXT << std::endl;
    std::cout << BOLD_TXT << "BHOLA" << " " << "KUMAR" << " " << "20" << RESET_TXT << std::endl;
}


int main(int argc, char const *argv[])
{
    std::string title = "test table";

    std::string row1 = "First name"; 
    std::string row2 = "Last name"; 
    std::string row3 = "No."; 

    before_formatting(title, row1, row2, row3);
  

    return 0;
}
