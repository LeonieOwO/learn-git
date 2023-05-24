#include <cstdint>
#include <iostream>
#include <memory>
#include <string>
#include "HA3.hpp"
/*
class animal
{
    protected:
    int num_feet = 0;
    int speed;
    int position = 0;
    //virtual void feet() const = 0;
    public:
    auto get_num_of_feet() -> int
{
    return num_feet;
}
    auto get_speed() -> double
{
    return speed;
}
    auto get_pos() -> double
{
    return position;
}
virtual void move(double time) = 0;
static void die()
{
    std::cout << "dying noises" << std::endl;
}

};

.class Spider : public Animal
{
    public:
    explicit Spider();
    {
    num_feet = 8;
    };
        void feet() const override
    {
        std::cout << "8" << std::endl;
    }

} ;.
class spider : public animal
{
   public:
    explicit spider(const double speedi)
    {
    num_feet = 8;
    speed = speedi;    
    
    }
    void move(double time) 
    {
        position += (time * speed);
        std::cout << "noise1" << std::endl;
    }

};



class mammal : public animal
{
    public:
    explicit mammal(const uint8_t feets)//,const double speedi)
    {
        num_feet = feets;
        speed = 8;

    }
    void move(double time) 
    {
        position += (time * speed);
        std::cout << "noise2" << std::endl;
    }
};*/

auto main() -> int
{
    
    mammal groundhog(4, 2.0);
    spider tarantula(4.5);
        std::cout <<"Number of feet Tarantula: " << tarantula.get_num_of_feet() << std::endl;
        std::cout <<"Number of feet Groundhog: " << groundhog.get_num_of_feet() << std::endl;
        std::cout <<"Speed Tarantula: " << tarantula.get_speed() << std::endl;
        std::cout <<"Speed Groundhog: " << groundhog.get_speed() << std::endl;
    for(int i; i <10; i++)
    {
        groundhog.move(static_cast<double>(i));
        tarantula.move(static_cast<double>(i));
    }
    std::cout <<"Meters walked in given time Tarantula: " << tarantula.get_pos() << std::endl;
    std::cout <<"Meters walked in given time Groundhog: " << groundhog.get_pos() << std::endl;
    return 0;
}
