#include<stdio.h>
void main()
{
	int n,i,x,count=0,a[50],t=0;
	t=t+2;
	printf("Enter The Number Of Elements:");t++;
	scanf("%d",&n);t++;
	printf("Enter The Elements");t++;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		t++;
	}t++;t++;
	printf("Enter The Element To Search");t++;
	scanf("%d",&x);t++;
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			count++;		
		}
		t++;
	}
	t++;t++;
	if(count>0)
	{
		printf("Item Found %d times",count);
	}
	else
	{
		printf("Item not Found");
		
	}
	t++;t++;
	printf("\nSpace Complexity =%d",(5*4+4*n));t++;t++;
	printf("\nTime Complexity =%d\n",t);
}	
