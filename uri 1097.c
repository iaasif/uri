//uri 1097 solved
#include<stdio.h>
int main()
{
    int i,j;
    i=1;
    j=7;
    while(i<=9 )
    {
        printf("I=%d J=%d\n",i,j);
        j=j-1;
        printf("I=%d J=%d\n",i,j);
        j=j-1;
        printf("I=%d J=%d\n",i,j);


        i+=2;
        j=j+4;

    }
    return 0;
}

