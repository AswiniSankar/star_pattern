/*
!!!!'*!!!!
!!!'*'*!!!
!!'*'*'*!!
!'*'*'*'*!
'*'*'*'*'*
*/


#include<stdio.h>
int main()
{
  int i,j,n,k;
  printf("enter the limit\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n-i;j++)
      printf("!");
    for(k=1;k<=i;k++)
      printf("'*");
    for(j=1;j<=n-i;j++)
      printf("!");
    printf("\n");
 }

return 0;
}
