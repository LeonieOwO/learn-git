#include <cstdint>
#include <iostream>
#include <memory>
#include <string>

class Animal
{
    //std::string str_x;
    public:
    virtual void make_noise() const = 0;
    //explicit Animal(const std::string &str_y) : str_x{str_y}{}
    /*void operator+(const Animal &ca)
    {
        std::string A = str_x + ca.str_x;
        std::string B = str_x + str_x;
        std::string C = str_x + ca.str_x;
        std::string D = ca.str_x + ca.str_x;
        std::cout << "All possible additions:" << A << "," << B << ","<< C << ","<< D << std::endl;
    }*/
};

class bird;

class cat : public Animal
{
    public:
        void make_noise() const override
    {
        std::cout << "miau" << std::endl;
    }
    void operator+(const cat &)
    {
        std::cout << " Cats play "<< std::endl;

    }
        void operator+(const bird &)
    {
        std::cout << " Cats hunts bird"<< std::endl;

    }
} ;

class bird : public Animal
{
    public:
        void make_noise() const override
    {
        std::cout << "miau" << std::endl;
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
    //Animal cat("Cat");
    //Animal bird("Bird");
    black + blue;
    
    return 0;
}