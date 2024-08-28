#include<stdio.h>
void main()
{
	int i=0,n,j,small,temp=0,t=0;
	t+2;
	printf("enter the no of elements:");t++;
	scanf("%d",&n);t+2;
	int a[n];
	printf("eneter the array elements:");
	t+2;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		t+2;
	}t++;
	for(i=0;i<n;i++)
	{
		t++;
		small=i;
		t+2;
		
		for(j=i+1;j<n;j++)
		{
			if(a[small]>a[j])
			{
				small=j;
				t++;
			}
		}t++;
		if(i!=small)
		{
			temp=a[i];
			a[i]=a[small];
			a[small]=temp;
			t+3;
		}
	}
	printf("The Sorted Array Is\n");t++;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
		t+2;
	}t++;t++;
	printf("\nThe Time Complexity is %d",t);
	printf("\nspace Complexity is %d\n",(24+(n*4)));
}
			
		
