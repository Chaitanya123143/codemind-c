#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int arr[a];
	for(int i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);	
	}
	int se,found=0;
	scanf("%d",&se);
	for(int i=0;i<a;i++)
	{
		if(arr[i]==se)
		{
			found=1;
			break;
		}
	}
	if(found==0)
	{
	printf("False");
    }
    else 
	{
	printf("True");
    }
}