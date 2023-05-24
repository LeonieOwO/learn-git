#ifndef HA3_H
#define HA3_H

#include <cstdint>
#include <iostream>
#include <memory>
#include <string>

class animal
{
    protected:
    int num_feet = 0;
    int speed;
    int position = 0;
    //virtual void feet() const = 0;
    public:
    auto get_num_of_feet() -> int;
    auto get_speed() -> double;
    auto get_pos() -> double;
    virtual void move(double) = 0;
    static void die();
};
class spider : public animal
{
   public:
    explicit spider(double);
    void move(double time) override;
};

class mammal : public animal
{
    public:
    explicit mammal(uint8_t ,double);
    void move(double time) override;
};

#endif /*HA3_H*/