/*
     *
     *
 * * * * *
     *
     *
*/
#include<stdio.h>
int main()
{
 int i,j,n;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {for(j=0;j<n;j++)
  {if(i==n/2 || j==n/2)
    printf("* ");
   else
    printf("  ");
  }
  printf("\n");
 }
 printf("\n");
 return 0;
}

/*
      *****
     *****
    *****
   *****
  *****
*/
#include<stdio.h>
int main()
{
 int i,j,n;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {for(j=n-1;j>i;j--)
    printf(" ");
  for(j=0;j<n;j++)
    printf("*");
 
    printf("\n");
 }
 printf("\n");
 return 0;
}
/*
 **
 **
 ****
 ****
 ******
 ******
*/
#include<stdio.h>
int main()
{
 int i,j,n,c=0;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {c=0;
  while(c<2)
  {for(j=0;j<i*2;j++)
    printf("*");
    c++;
    printf("\n");
  }
 }
 printf("\n");
 return 0;
}
/*
******
******
****
****
**
**
*/
#include<stdio.h>
int main()
{
 int i,j,n,c=0;
 scanf("%d",&n);
 for(i=n;i>=0;i--)
 {c=0;
  while(c<2)
  {for(j=0;j<i*2;j++)
    printf("*");
    c++;
    printf("\n");
  }
 }
 printf("\n");
 return 0;
}

/*
      **
      **
    ****
    ****
  ******
  ******
*/
#include<stdio.h>
int main()
{
 int i,j,n,t,c=0,k;
 scanf("%d",&n);
 t=n-1;
 for(i=1;i<=n;i++)
 {
  c=0;
  while(c<2)
  {
     for(k=t*2;k>0;k--)
      printf(" ");
    for(j=0;j<i*2;j++)
     printf("*");
    c++;
    printf("\n");
  }
  t=t-1;
 }
 printf("\n");
 return 0;
}
/*
******
******
  ****
  ****
    **
    **


*/
#include<stdio.h>
int main()
{
 int i,j,n,t,c=0,k;
 scanf("%d",&n);
 t=0;
 for(i=n;i>0;i--)
 {
  c=0;
  while(c<2)
  {
     for(k=t*2;k>0;k--)
      printf(" ");
    for(j=0;j<i*2;j++)
     printf("*");
    c++;
    printf("\n");
  }
  t=t+1;
 }
 printf("\n");
 return 0;
}
/*
    *   *
     * *
      *
    *  *
   *    *
*/
#include<stdio.h>
int main()
{
 int i,j,n;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {for(j=0;j<n;j++)
   { if(i==j || (i+j)==n-1)
     printf("*");
    else
     printf(" ");   
  }printf("\n");
 }
 printf("\n");
 return 0;
}
/*
     *       *
    * *     * *
   * * *   * * *
  * * * * * * * *
*/
#include<stdio.h>
int main()
{
 int i,j,n;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {for(j=n-1;j>i;j--)
    printf(" ");
  for(j=0;j<=i;j++)
   printf("* ");
   for(j=n-1;j>i;j--)
    printf(" ");
   for(j=n-1;j>i;j--)
    printf(" ");
  for(j=0;j<=i;j++)
   printf("* ");
   printf("\n");
 }
 printf("\n");
 return 0;
}

/*
    *      *
   ***    ***
  *****  *****
 **************
*/
#include<stdio.h>
int main()
{
 int i,j,n,t=1;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  for(j=n-1;j>i;j--)
    printf(" ");
  for(j=t+i;j>i;j--)
   printf("*");
  for(j=n-1;j>i;j--)
    printf(" ");
 for(j=n-1;j>i;j--)
    printf(" ");
  for(j=t+i;j>i;j--)
   printf("*");
  t=t+2;
   printf("\n");
 }
 printf("\n");
 return 0;
}
/*
*      *
**    **
***  ***
********
***  ***
**    **
*      *
*/
#include<stdio.h>
int main()
{
 int i,j,n,t=1;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {for(j=0;j<(n*2);j++)
  {
    if(j<=i||(i+j)>n*2-2||j==0)
       printf("*");
     else
       printf(" ");
  }
   printf("\n");
 }
  for(i=n-1;i>0;i--)
  {
    for(j=0;j<(n*2);j++)
    {
      if((i+j)>=n*2||j<i||j==0)
        printf("*");
       else
        printf(" ");
    }printf("\n");
  }
 printf("\n");
 return 0;
}
/*
********
***  ***
**    **
*      *
*/
#include<stdio.h>
int main()
{
 int i,j,n,t=1;
 scanf("%d",&n);
 
  for(i=n;i>0;i--)
  {
    for(j=0;j<(n*2);j++)
    {
      if((i+j)>=n*2||j<i||j==0)
        printf("*");
       else
        printf(" ");
    }printf("\n");
  }
 printf("\n");
 return 0;
}

/*

*      *
**    **
***  ***
********
*/
#include<stdio.h>
int main()
{
 int i,j,n,t=1;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {for(j=0;j<(n*2);j++)
  {
    if(j<=i||(i+j)>n*2-2||j==0)
       printf("*");
     else
       printf(" ");
  }
   printf("\n");
 }
 printf("\n");
 return 0;
}   
/*
         *
        * * 
       * * *
      * * * *
     * * * * *
    *         *
   * *       * * 
  * * *     * * *
 * * * *   * * * *
* * * * * * * * * *
*/
#include<stdio.h>
int main()
{
 int i,j,n;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 
  for(j=n*2-1;j>i;j--)
    printf(" ");
  for(j=0;j<=i;j++)
   printf("* ");
  printf("\n");
 } 
 for(i=0;i<n;i++)
 {
  for(j=n-1;j>i;j--)
    printf(" ");
  for(j=0;j<=i;j++)
   printf("* ");
   for(j=n-1;j>i;j--)
    printf(" ");
   for(j=n-1;j>i;j--)
    printf(" ");
  for(j=0;j<=i;j++)
   printf("* ");
   printf("\n");
 }
 printf("\n");
 return 0;
}

/*
*********
**** ****
***   ***
**     **
*       *
**     **
***   ***
**** ****
*********
*/

#include<stdio.h>
int main()
{
 int i,j,n;
 scanf("%d",&n);
for(i=0;i<n-1;i++)
 {
  for(j=0;j<2*n;j++)
  {
    if(i+j<n||j>=n+i)
       printf("*");
    else
     printf(" ");  
  }
  printf("\n");
 } 
 for(i=0;i<n;i++)
 {
  for(j=0;j<2*n;j++)
  {
    if(i>=j||(i+j)>=2*n-1)
       printf("*");
    else
     printf(" ");  
  }
  printf("\n");
 }
 
 printf("\n");
 return 0;
}
/*
********
*** ****
**   ***
*     **
**     *
***   **
**** ***
********
*/
#include<stdio.h>
int main()
{
 int i,j,n;
 scanf("%d",&n);
for(i=0;i<n;i++)
 {
  for(j=0;j<n*2;j++)
  {
    if(i+j<=n||j>=n+i)
       printf("*");
    else
     printf(" ");  
  }
  printf("\n");
 } 
for(i=0;i<n;i++)
 {
  for(j=0;j<2*n;j++)
  {
    if(i>=j||(i+j)>=2*n-2)
       printf("*");
    else
     printf(" ");  
  }
  printf("\n");
 }
 
 
 
 printf("\n");
 return 0;
}
/*


    *
     *
      *
       *
*********
       *
      *
     *
    *
*/
#include<stdio.h>
int main()
{
 int i,j,n;
 scanf("%d",&n);
for(i=0;i<n*2-1;i++)
 {
  for(j=0;j<n*2-1;j++)
  {
    if(i==((n*2)-1)/2||j>=((n*2)-1)/2 && j==((n*2)-1)/2 +i||(i+j)==(n-1)*3)
       printf("*");
    else
     printf(" ");  
  }
  printf("\n");
 } 

 
 
 printf("\n");
 return 0;
}

/* 
*******
**   **
* * * *
*  *  *
* * * *
**   **
*******
*/
#include<stdio.h>
int main()
{
 int i,j,n;
 scanf("%d",&n);
for(i=0;i<n*2;i++)
 {
  for(j=0;j<n*2;j++)
  {
    if(i==0||j==0||i==(2*n)-1||j==(2*n)-1||i==j||(i+j)==n*2-1)
       printf("*");
    else
     printf(" ");  
  }
  printf("\n");
 } 

 
 
 printf("\n");
 return 0;
}
/*
*
**
* *
*  *
*   *
*    *
*******
*/

#include<stdio.h>
int main()
{
 int i,j,n;
 scanf("%d",&n);
for(i=0;i<n*2-1;i++)
 {
  for(j=0;j<n*2-1;j++)
  {
    if(j==0||i==(2*n)-2||i==j)
       printf("*");
    else
     printf(" ");  
  }
  printf("\n");
 } 

 
 
 printf("\n");
 return 0;
}

/* 
       *
    *  *  *
   * * * * *
    *  *  *
       *
*/
#include<stdio.h>
int main()
{
 int i,j,n,k,t=1,t1=1;
 scanf("%d",&n);
for(i=0;i<n;i++)
 {
  for(j=n-1;j>i;j--)
   printf(" ");
  for(k=0;k<t;k++)
   printf("*");
  t+=2;
  printf("\n");
 } 
 t=t-4;
 for(i=n-1;i>0;i--)
 {
  for(j=1;j<=t1;j++)
   printf(" ");
  for(k=0;k<t;k++)
   printf("*");
  t=t-2;
  t1=t1+1;
  printf("\n");
 } 

 
 printf("\n");
 return 0;
}
