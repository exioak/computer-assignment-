#include<stdio.h>
main()
{
int a,m,n;
printf("enter a no.\n");
scanf("%d",&a);
m=a%10;
n=(a/10)%10;
a=a/100;
a=(a*100)+(m*10)+n;
printf("now no. is = %d\n",a);
}
