#include <string>

#include "format.h"

using std::string;
long HH, MM, SS;
// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) { 
    
    HH = seconds / 3600;
    seconds = seconds % 3600;
    MM = seconds / 60;
    SS = seconds % 60;
    return std::to_string(HH) + ":" + std::to_string(MM) + ":" + std::to_string(SS);
 }