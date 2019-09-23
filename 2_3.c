#include<stdio.h>
#include<math.h>
main()
{
float a,b,c,d,e,f,p,q,r,s,area;
printf("enter coordinates as (a,b),(c,d)and (e,f)\n");
scanf("%f\n%f\n%f\n%f\n%f\n%f",&a,&b,&c,&d,&e,&f);
p=sqrt(pow((c-a),2)+pow((d-b),2));
q=sqrt(pow((e-c),2)+pow((f-d),2));
r=sqrt(pow((e-a),2)+pow((f-b),2));
s=(p+q+r)/2;
area=sqrt(s*(s-p)*(s-q)*(s-r));
printf("area of triangle is = %f",area);
}
