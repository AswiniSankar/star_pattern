/*
enter the limit
5
  * * * * * * * * * * * * * * * * * 
    * * * * * * *   * * * * * * * 
      * * * * *       * * * * * 
        * * *           * * * 
          * * * * * * * * * 
            * * * * * * * 
              * * * * * 
                * * * 
                  * 
*/


#include<stdio.h>
int main()
{
  int n,i,j,k,t=1,t1=1;
  printf("enter the limit\n");scanf("%d",&n);
  for(i=1;i<n;i++)
  { for(j=1;j<=i;j++)
      printf("  ");
    for(j=1;j<=n*2-t;j++)
      printf("* ");
   // k=j-1;
    // printf("%d",k);
  if(i==1)
  for(j=1;j<=n*2-t-1;j++)
      printf("* ");
   if(i>1)
     {for(j=2;j<t1;j++)
       printf("  ");
    for(j=1;j<=n*2-t;j++)
      printf("* ");
    }
   t=t+2;
   t1=t1+2;
    printf("\n");
  }
  t=1;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<n+i;j++)
      printf("  ");
    for(j=1;j<=n*2-t;j++)
      printf("* ");
   t=t+2;
    printf("\n");
  }
return 0;
}
