#include<stdio.h>
void main()
{
    int i,x,y,a=0;
    char p='*';
    for(i=0;i<3;i++)
    {
        for(x=0;x<30;x++)
        {
            printf("%c",p);
        }
        printf("\n");

        for(y=0;y<2;y++)
        {
            printf("%c%d%d%c%d%c%c%d%d%c%c%d%c%d%d",p,a,a,p,a,p,p,a,a,p,p,a,p,a,a);
        }
        printf("\n");
    }

}
