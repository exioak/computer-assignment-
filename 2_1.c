#include<stdio.h>
#include<math.h>
main()
{
float a,b,c,s,area;
printf("enter sides of triangle\n");
scanf("%f\n%f\n%f",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("area of triangle is = %f",area);
}
