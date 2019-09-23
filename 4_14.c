#include<stdio.h>
main()
{
	int i,j=0;
	for(i=1;i<100;i+=2,j+=2)
	if((i/10)%2==0)
	printf("%d ",i);
	else
	printf("%d ",j);
}
