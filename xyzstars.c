/*
ip:7
op:
     * * *     * * *
    * * * *    * * * *
   * * * * *   * * * * *
  * * * * * *  * * * * * *
 * * * * * * * * * * * * * *
  * * * * * * * * * * * * *
   * * * * * * * * * * * *
    * * * * * * * * * * *
     * * * * * * * * * *
      * * * * * * * * *
       * * * * * * * *
        * * * * * * *
         * * * * * *
          * * * * *
           * * * *
            * * *
             * *
              *


*/
#include<stdio.h>
int main()
{
  int i,j,k,n,m,p,x;
  scanf("%d",&n);
  for(i=3;i<=n;i++)
  {
    for(k=1;k<=n-i;k++)printf(" ");
    for(j=1;j<=i;j++)printf(" *");
    for(p=1;p<=n-i;p++)printf(" ");
    for(x=1;x<=i;x++)printf(" *");
    printf("\n");  
  }
  m=2*n-1;
  for(i=1;i<=m;i++)
  {
   printf(" ");
   for(k=1;k<i;k++)printf(" ");
   for(j=i;j<=m;j++)printf(" *");
   printf("\n");
  }
return 0;
}
