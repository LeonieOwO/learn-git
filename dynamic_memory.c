#include <stdio.h>
#include <stdlib.h>


int main()
{
int exercise;
scanf("%d", &exercise);

int* p = (int*)malloc(exercise * sizeof(int));

for(int i =0; i<exercise; i++)
{

p[i] = i+1;
printf("%d \n", i);
}
free(p);
return 0;
}