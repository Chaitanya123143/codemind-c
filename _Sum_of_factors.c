#include<stdio.h>
int main()
{
    int sum=0,a;
    scanf("%d",&a);
    for(int i = 1;i < a;i++)
    {
        if(a%i==0)
        {
            sum+=i;
        }
    }
    printf("%d",sum);
}