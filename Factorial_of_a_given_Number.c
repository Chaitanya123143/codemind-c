#include<stdio.h>
int main()
{
    int a,b=1;
    scanf("%d",&a);
    for(int i=a;i>0;i--)
    {
        b*=i;
    }
    printf("%d",b);
}