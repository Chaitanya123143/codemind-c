#include<stdio.h>
int main()
{
    int a=0,n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        a+=i;
    }
    printf("%d",a);
}