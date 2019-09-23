#include<stdio.h>
main()
{
	int i=0;
	for(;1;i++)
	if(rev(i)%3==1)
	printf("%d ",i);	
}
int rev(int n)
{
	int rev=0;
	while(n>0)
	{
		rev=rev*10+n%10;
		n/=10;
	}
	return (n%10);
}

