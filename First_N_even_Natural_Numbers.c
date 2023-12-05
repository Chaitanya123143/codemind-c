#include<stdio.h>
int main()
{
    int count=0,a;
    scanf("%d",&a);
    for(int i = a;i > 0; i--)
    {
        printf("%d ",i*2);
    }
}