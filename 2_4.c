#include<stdio.h>
#include<math.h>
main()
{
float a,b,c,s;
printf("enter equation constants as of a*x+b*y+c=0\n");
scanf("%f\n%f\n%f",&a,&b,&c);
s=-a/b;
printf("slope is = %f",s);
}
