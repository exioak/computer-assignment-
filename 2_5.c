#include<stdio.h>
#include<math.h>
main()
{
float a,b,c,d,e,dist;
printf("enter coordinates as (a,b) and equation of line as (cx+dy+e=0)\n");
scanf("%f\n%f\n%f\n%f\n%f",&a,&b,&c,&d,&e);
dist=(a*c+b*d+e)/sqrt(c*c+d*d);
printf("distance between line and point is = %f",dist);
}
