#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,z,h;
    scanf("%f%f",&x,&y);
    z=(x*x)+(y*y);
    h=sqrt(z);
    printf("%.2f",h);
    
}