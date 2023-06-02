#include <cstdint>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

class Animal
{
    public:
    virtual void make_noise(Animal& an) const = 0;
    
};

class bird;

class cat : public Animal
{
    public:
        void make_noise(Animal&) const 
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
        void make_noise(Animal& ) const
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
    //black.make_noise();
    //blue.make_noise();

    std::vector<std::shared_ptr<Animal>> animal_vec;

    std::shared_ptr<cat> blackie = std::make_shared<cat>();
    std::shared_ptr<bird> bluie = std::make_shared<bird>();

    for(int i = 0; i < 10;i ++)
    {
    animal_vec.push_back(blackie);
    animal_vec.push_back(bluie);
    }


    for(const auto &itr : animal_vec) 
    {
        itr->make_noise(*itr);
    };

    
    return 0;
}