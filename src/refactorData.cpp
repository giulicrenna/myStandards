#include <../src/mStandars.h>

/*
this function is used to re format the date and add the zeros when a date, or time
lenght is minor to 2
*/
std::string mstd::refactor(int time)
{
    if (time < 10)
    {
        std::string refactor = std::string("0") + std::string(std::to_string(time));
        return refactor;
    }
    else
    {
        return std::string(std::to_string(time));
    }
};