#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calculator()
{
    printf("\n----Calculator Function------\n\n");
    int a=0,b=0;
    printf("Enter 2 numbers:\n");
    scanf("%d",&a);
    scanf("%d",&b);

    int c = a+b;
    printf("Addition: %d\n",c);

    c = a-b;
    printf("Subtraction: %d\n",c);
    return c;
}
