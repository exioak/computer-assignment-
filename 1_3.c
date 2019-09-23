#include<stdio.h>
#include<math.h>
main()
{
int a,b,c,p,f;
printf("enter a,b,c as of ax^2+bx+c and x\n");
scanf("%d\n%d\n%d\n%d",&a,&b,&c,&p);
f=a*pow(p,2)+b*p+c;
printf("f(p) = %d",f);
}

