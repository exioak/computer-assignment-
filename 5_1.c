#include<stdio.h>
void main()
{
int x,y,b=0,c=0;
char a='*';
    for(x=0;x<3;x++)
    {
    for(y=0;y<20;y++)
    {
    printf("%c",a);
    }
    printf("\n");
    if(c<2)
    {
    for(y=0;y<10;y++)
    {
    printf("%c%d",a,b);
    }
    c++;
    }
    printf("\n");
    }
}
