#include <cstdint>
#include <iostream>

auto main() ->int
{
 int exercise;
 scanf("%d",&exercise);
int* p=new int[exercise];
//int* p=(int*)malloc(exercise * sizeof(int));
 for(int i =1; i<exercise; i++)
 {
    p[i-1] = i;
    //printf("%d \n", i);
    std::cout<< i <<std::endl;
 }  
  delete[] p;
}