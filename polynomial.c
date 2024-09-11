#include<stdio.h>
struct pol
	{
		int coeff;
		int expo;
	};
void main()
{
	int n,i;
	printf("Enter the number Of terms of the polynomial:");
	scanf("%d",&n);
	struct pol a[n];
	printf("enter the terms of the polynomial in descending:\n");
	for(i=0;i<n;i++)
	{
		printf("coefficient %d:",i+1);
		scanf("%d",&a[i].coeff);
		printf("Exponent %d:",i+1);
		scanf("%d",&a[i].expo);
	}
	printf("Polynomial is \t");
	for(i=0;i<n;i++)
	{
		if(i<n-1)
		{
			printf("(%dx^%d)+",a[i].coeff,a[i].expo);
		}
		else
		{
			printf("(%dx^%d)",a[i].coeff,a[i].expo);
		}
	}
	printf("\n");
}
			
