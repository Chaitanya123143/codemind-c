#include<stdio.h>
int main()
{
    int x,a;
    scanf("%d",&a);
    for(int i=a;i>0;i/=10)
    {
        x=i%10;
        printf("%d",x);
    }
}