#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    float d,h,g,c;
    if(a<=10000)
    {
        d=0.80;
        h=0.20;
    }
    else if(a<=20000)
    {
        d=0.90;
        h=0.25;
    }
    else
    {
        d=0.95;
        h=0.30;
    }
    c=d*a+h*a;
    g=a+c;
    printf("%.2f",g);
}