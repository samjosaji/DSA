#include <stdio.h>
  void main()
{
  int a[100], n, i, j,temp,c=0 ;
  c++;
  printf("Enter number of elements:\n");
  c++;
  scanf("%d", &n);
  c++;
  printf("Enter the elements:\n");
  c+2;
  for (i= 0;i< n;i++){
    scanf("%d", &a[i]);
    c++;
    c++;
   }
   c++;
  for (i=0;i< n - 1;i++)
  {
      c+2;
    for (j= 0 ;j< n-i-1;j++)
    {
        c++;
      if (a[j]> a[j+1])
      {
         temp= a[j];c++;
        a[j]= a[j+1];c++;
        a[j+1] =temp;c++;
      }}}
  printf("Sorted is:\t");
  c+2;
  for (i = 0;i< n;i++){
        c++;
  printf("%d\t",a[i]);
  c++;
  }
  c++;
  printf("\nthe space complexity is %d\n",25+(n*4));
  c++;
  printf("the time complexity is %d\n",c);
}
