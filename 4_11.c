#include<stdio.h>
main()
{
	int i=0;
	for(;i<100;i++)
	if((i%10+i/10)%7==0)
	printf("%d ",i);
}
