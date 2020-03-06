#include <stdio.h>
int main()
{
	int a[20],m,n,p;
	int temp=0;
	printf("Enter number of elements ");
	scanf("%d",&n);
	printf("Enter elements of array\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element to search ");
	scanf("%d",&m);
	for(int i=0;i<n;i++)
	{
		if(a[i]==m)
		{
			temp=temp+1;
			p=i+1;
		}
	}
	if(temp>0)
	{
		printf("%d is found at position %d ",m,p);
		
	}
	else
	{
		printf("%d not found in array",m);
	}
	printf("\n");
}