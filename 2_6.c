#include<stdio.h>
#include<math.h>
main()
{
float a,b,c,radius,h,k;
printf("enter a,b,c in general form of circle\n");
scanf("%f\n%f\n%f",&a,&b,&c);
h=a/-2;
k=b/-2;
radius=sqrt((a*a)/4+(b*b)/4-c);
printf("centre of circle is (%f,%f)and radius is = %f\n",h,k,radius);
}
