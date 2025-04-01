#include <iostream>
#include <sstream>
#include <iomanip>

std::string rgb_to_hex(int r, int g, int b)
{
    r = std::max(0, std::min(255, r)); //Converty red to hex
    g = std::max(0, std::min(255, g)); //converts green to hex
    b = std::max(0, std::min(255, b)); // converts blue to hex

    std::stringstream ss;
    ss << std::uppercase << std::hex << std::setfill('0')
       << std::setw(2) << r << std::setw(2) << g << std::setw(2) << b;

    
}

//Test with std::string hexColor = rgb_to_hex(255, 127, 0); // returns "FF7F00"
