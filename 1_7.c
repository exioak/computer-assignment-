#include<stdio.h>
main()
{
int a,m,n;
printf("enter a no.\n");
scanf("%d",&a);
m=a%10;
a=a/10;
n=a%10;
printf("sum of last two digits is = %d\n",m+n);
}
