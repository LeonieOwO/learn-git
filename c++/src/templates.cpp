#include <cstdint>
#include <iostream>
#include <memory>
#include <string>



template <typename T>
auto my_max(const T &par_x,const T &par_y, const double eps) -> bool
{
    static_assert(std::is_arithmetic<T>::value, "makes sense");
    //eps = 3;
    bool re= std::abs(static_cast<double>(par_x) - static_cast<double>(par_y)) < eps;
    return re;
    //return(|par_x - par_y| < eps) ? par_x : par_y;
}

auto main() -> int
{
    
    std::cout << my_max<double>(3.0 ,7.5 ,0.1) << std::endl;
    return 0;
}