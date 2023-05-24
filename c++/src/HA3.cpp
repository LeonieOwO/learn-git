#include <cstdint>
#include <iostream>
#include <memory>
#include <string>

class Animal
{
    protected:
    int num_feet = 0;
    //virtual void feet() const = 0;
    public:
    auto get_num_of_feet() -> int
{
    return num_feet;
}
    
};

/*class Spider : public Animal
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

} ;*/
class Spider : public Animal
{
   public:
    Spider()
    {
    num_feet = 8;
    }
};



class Mammal : public Animal
{
    public:
    explicit Mammal(int feets)
    {
        num_feet = feets;
    }

    /*void feet() const override
    { 
        std::cout << num_feet << std::endl;
    }*/
};

auto main() -> int
{
    
    Mammal groundhog = Mammal(4);
    Spider tarantula;
        std::cout << tarantula.get_num_of_feet() << std::endl;
        std::cout << groundhog.get_num_of_feet() << std::endl;
    return 0;
}
