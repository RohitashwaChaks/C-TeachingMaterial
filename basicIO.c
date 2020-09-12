/*
Function to understand print(Output) and scanf(Input) functions!

Input:
    x : Integer,
    y: Float,
    z: Character

Output: Values of x, y, z

*/

#include <stdio.h>
#include <stdlib.h>

int basicIO()	//Function Definition
{
    printf("\n----Basic I/O Function------\n\n");
    int x;
    printf("Enter new value for x: ");
	scanf("%d",&x);

    int y = 3;
	printf("Value of x is: %d\n",x);

	float z = (float)x/y;

	printf("Value of %d/%d is: %f\n",x,y,z);

	printf("Value of %d+%d is: %d\n",x,y,(x+y));

	printf("User Assigned value for x is: %d\n",x);
}
