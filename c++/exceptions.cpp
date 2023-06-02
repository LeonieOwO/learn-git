#include <exception>
#include <cstdint>
#include <iostream>
#include <memory>


auto division(const int a, const int b) -> double
{
    if (b == 0)
    {
        throw std::invalid_argument("Division by zero!");
    }
    return (static_cast<double>(a) / static_cast<double>(b));
}

struct MyException::public std::exception
{
  const char* what() const noexcept override
    {
        return "C++ Exception";
    }
};

auto main() -> int
{
int x = 50, y = 0;
double z = 0.0;

try{
    z = division(x, y);
    std::cout << z << std::endl;
}
catch (std::invalid_argument& inv)
{
    std::cerr << inv.what() << std::endl;
}
return 0;
}