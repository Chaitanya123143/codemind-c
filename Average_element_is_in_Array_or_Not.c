#include<stdio.h>
int main()
{
    int a,i,c=0;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0,avg=0;
    for(i=0;i<a;i++)
    {
        sum+=arr[i];
    }
    avg=sum/a;
    for(i=0;i<a;i++)
    {
        if(avg==arr[i])
        {
            c=1;
        }
    }
    if(c)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}