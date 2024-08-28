#include<stdio.h>
void main()
{
	int left=0,n,x,i,mid,flag=0,t=0,right;
	t++;
	printf("Enter the value of n:");t++;
	scanf("%d",&n);t++;
	int a[n];
	printf("Enter Array Elements:");t++;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}t++;t++;
	t++;
	printf("Enter The Element To Search");
	t++;
	scanf("%d",&x);t++;
	right=n-1;
	while(left<=right)
	{
	mid=(left+right)/2;
	if(x==a[mid])
	{
		printf("Element is present at %d",mid+1);
		flag=1;
		break;
	}
	else if(x>a[mid])
	{
	left=mid+1;
	t++;
	}
	else if(x<a[mid])
	{
	right=mid-1;
	t++;
	}
	}t++;t++;
	t++;
	t++; 
	t++;
	if(flag==0)
	printf("Element is not found");
	t++;
	printf("\n Space complexity=%d",28+(4*n));
	t++;
	t++;
	printf("\nTime Complexity=%d",t);
}
	
	
