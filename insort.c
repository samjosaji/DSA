#include<stdio.h>
void main()
{
	int i=1,j,n,temp,t=0;
	t++;
	printf("Enter The Number Of Elements");
	t++;
	scanf("%d",&n);
	t++;
	int a[n];
	printf("Enter The Array Elements\n");t++;
	for(i=0;i<n;i++)
	{
	t++;
		scanf("%d",&a[i]);
		t++;
	}t++;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		t=t+3;
		while(j>=0&&a[j]>temp)
		{
			a[j+1]=a[j];
			t=t+2;
			j--;
		}t++;
			a[j+1]=temp;
			t++;
		}t++;
	printf("Sorted Array\n");t++;
	for(i=0;i<n;i++)
	{
	t++;
		printf("%d\t",a[i]);
		t++;
	}
	t++;
	printf("\n Space complexity=%d",(5*4+4*n));
	t++;
	t++;
	printf("\n Time Complexity=%d",t);
}

