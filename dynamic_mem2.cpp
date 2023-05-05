#include <cstdint>
#include <iostream>
#include <memory>

auto main() ->int
{
 int exercise;
 scanf("%d",&exercise);
 //std::unique_ptr<int[]> p::make_unique<int[]>(exercise);
 auto p = std::make_unique<int[]>(exercise);

 for(int i =1; i<exercise; i++)
 {
    p[i-1] = i;
    
    std::cout<< i <<std::endl;
 }  
}