#include <string>
#include <iomanip>

#include "format.h"

using std::string;

// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
string Format::ElapsedTime(long seconds) {
    std::stringstream s; 

    auto hours = seconds / (60 * 60);
    auto minutes = seconds / 60 % 60;
  	seconds-=(hours*3600 + minutes*60);
	
    s << std::setfill('0')
      << std::setw(2)
      << hours
      << ":"
      << std::setfill('0')
      << std::setw(2)
      << minutes
      << ":"
      << std::setfill('0')
      << std::setw(2)
      << seconds;

    return s.str();
 }