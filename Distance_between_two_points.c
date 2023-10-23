#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    e=((c-a)*(c-a))+((d-b)*(d-b));
    printf("%.4f",sqrt(e));
}