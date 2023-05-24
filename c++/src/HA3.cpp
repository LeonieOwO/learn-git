#include <cstdint>
#include <iostream>
#include <memory>
#include <string>
#include "HA3.hpp"

    auto animal::get_num_of_feet() -> int
{
    return num_feet;
}
    auto animal::get_speed() -> double
{
    return speed;
}
    auto animal::get_pos() -> double
{
    return position;
}
void animal::die()
{
    std::cout << "dying noises" << std::endl;
}


    
    spider::spider(const double speedi)
    {
    num_feet = 8;
    speed = speedi;    
    }
    void spider::move(double time) 
    {
        position += (time * speed);
        std::cout << "crawl" << std::endl;
    }

    mammal::mammal(const uint8_t feets,const double speedi)
    {
        num_feet = feets;
        speed = speedi;

    }
    void mammal::move(double time) 
    {
        position += (time * speed);
        std::cout << "pirsch" << std::endl;
    }