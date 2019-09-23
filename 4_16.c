#include<stdio.h>
main()
{
	int i=10;
	for(;i<90;i+=2)
	if((i>9&&i<30)||(i>39&&i<60)||(i>69&&i<90))
	printf("%d ",i);
}
