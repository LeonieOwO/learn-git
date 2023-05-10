#include <cstdint>
#include <iostream>
#include <memory>


class Shape
{
    public:
    void set_width(int8_t width_in)
    {
        width_ = width_in;
    }
    void set_height(int8_t height_in)
    {
        height_ = height_in;
    }
    protected:
    int8_t width_;
    int8_t height_;
};

class PaintCost
{
    public:
    auto get_cost(double area)
    {
        return 70 * area;
    }

};
 
class Triangle : public Shape, public PaintCost
{
    public:
    auto get_area() -> double
    {
        return (0.5 * width_ * height_);
    }
} ;

auto main() ->int
{
    Triangle love;
    love.set_height(2);
    love.set_width(5);
    double area = love.get_area();
    std::cout<< "Fläche: " << love.get_area() <<std::endl;
    std::cout<< "Farbkosten: " << love.get_cost(area) <<std::endl;


}
