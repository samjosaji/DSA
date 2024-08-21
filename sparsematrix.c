#include<stdio.h>
void main()
{
	int m,n,k=1,i,j;
	printf("Enter The Row Of Matrix");
	scanf("%d",&m);
	printf("Enter The Coloumn Of Matrix");
	scanf("%d",&n);
	int a[30][30],b[40][3];
	printf("Enter The Element");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n The Entered Matrix Is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
	b[0][0]=m;
	b[0][1]=n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]!=0)
			{
				b[k][0]=i;
				b[k][1]=j;
				b[k][2]=a[i][j];
				k++;
				
			}
		}
	}
	b[0][2]=k-1;
	printf("\n");
	for(i=0;i<k;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}
			
	
