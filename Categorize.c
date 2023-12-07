#include<stdio.h>
int main()
{
    float a;
    scanf("%f",&a);
    if(a<150.0)
    {
        printf("The person is Dwarf.");
    }
    else if(a>150.0 && a<165.0)
    {
        printf("The person is average heighted.");
    }
    else if(a>165.0 && a<=195.0)
    {
        printf("The person is taller.");
    }
    else
    {
        printf("Abnormal height.");
    }
}