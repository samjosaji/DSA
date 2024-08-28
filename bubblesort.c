#include <stdio.h> 
void main() 
{ 
  int a[100], n, i, j,temp,t=0 ; 
  t++; 
  printf("Enter number of elements:\n"); 
  t++; 
  scanf("%d", &n); 
  t++; 
  printf("Enter the elements:\n"); 
  t+2; 
  for (i= 0;i< n;i++) 
  { 
    scanf("%d", &a[i]); 
    t++; 
    t++; 
  } 
  t++; 
  for (i=0;i< n - 1;i++) 
  { 
    t+2; 
    for (j= 0 ;j< n-i-1;j++) 
    { 
      t++; 
      if (a[j]> a[j+1]) 
      { 
        temp= a[j];t++; 
        a[j]= a[j+1];t++;
        a[j+1] =temp;t++; 
      } 
    } 
  } 
  printf("Sorted is:\t"); 
  t+2; 
  for (i = 0;i< n;i++) 
  { 
    t++; 
    printf("%d\t",a[i]); 
    t++; 
  } 
  t++; 
  printf("\nthe space complexity is %d\n",25+(n*4)); 
  t++; 
  printf("the time complexity is %d\n",t); 
} 
