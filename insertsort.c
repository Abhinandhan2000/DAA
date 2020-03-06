#include<stdio.h>
int main()
{
	int n,a[20],i,t,j;
	printf("Enter number of elements ");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		t=a[i];
		j=i-1;
		while(j>=0 & a[j]>=t)
		{
			a[j+1]=a[j];
			j=j-1;
			a[j+1]=t;
		}
	}
	printf("The array after sorting is\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
