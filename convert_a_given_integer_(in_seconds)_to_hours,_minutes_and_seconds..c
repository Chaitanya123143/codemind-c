#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    b=a/(60*60);
    c=(a%(60*60))/60;
    d=(a-(3600*b)-(c*60));
    printf("H:M:S-%d:%d:%d",b,c,d);
}