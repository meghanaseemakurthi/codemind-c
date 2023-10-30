#include<stdio.h>
int main()
{
    float x,y ;
    scanf("%f %f", &y, &x);
    printf("%.2f", ((x-y)/y)*100);
}