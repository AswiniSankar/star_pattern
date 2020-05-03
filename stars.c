/*
enter the limit
4
* * * * 
* * * 
* * 
* 
*/
#include<stdio.h>
int main()
{
  int n,i,j;
  printf("enter the limit\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
 {
  for(j=i;j<=n;j++)
  printf("* ");
  printf("\n");
 }
return 0;
}

/*
enter the limit
4
* 
 **
  ***
   ****
  ***
 **
*
*/
#include<stdio.h>
int main()
{
 int n,i,j;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 { for(j=0;j<i;j++)
      printf(" ");
    for(j=0;j<=i;j++)
      printf("*");
  printf("\n");
 }
 for(i=n-1;i>0;i--)
 {
     for(j=1;j<i;j++)
       printf(" ");
     for(j=0;j<i;j++)
       printf("*");
     printf("\n");
 }
 printf("\n");
 return 0;
}
