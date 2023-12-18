#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0,odd=0;
    for(int i=0;i<a;i++)
    {
        if(arr[i]%2==0)
        sum+=arr[i];
        else
        odd+=arr[i];
    }
    printf("%d",abs(sum-odd));
}