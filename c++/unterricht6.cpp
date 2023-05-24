#include <cstdint>
#include <iostream>
#include <memory>
#include <string>

class Animal
{
    public:
    virtual void make_noise() const = 0;
  
};

class bird;

class cat : public Animal
{
    public:
        void make_noise() const
    {
        std::cout << "miau" << std::endl;
    }
    void operator+(const cat &)
    {
        std::cout << "Cats play "<< std::endl;

    }
        void operator+(const bird &)
    {
        std::cout << "Cat hunts bird"<< std::endl;

    }
} ;

class bird : public Animal
{
    public:
        void make_noise() const
        {
        std::cout << "chirp" << std::endl;
        }
    void operator+(const cat &)
    {

        std::cout << "Bird flies away" << std::endl;

    }
        void operator+(const bird &)
    {

        std::cout << "Birds sing together"<< std::endl;

    }
} ;


auto main() -> int
{
    cat black;
    bird blue;
    black + blue;
    black + black;
    blue + black;
    blue + blue;
    black.make_noise();
    blue.make_noise();
    
    return 0;
}