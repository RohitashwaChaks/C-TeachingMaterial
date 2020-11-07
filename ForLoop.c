/*
Function to implement For Loop!

Input: N/A
Output: Addition of first n natural numbers.

*/

#include <stdio.h>
#include <stdlib.h>

int ForLoop()	//Function Definition
{
    /* Function-Body
    We write the function 'code' here */
    printf("Enter n:");
    int x;
    scanf("%d", &x);

    int sum = 0;
    // For Loop implementation
    /**
    int i = 1;
        -> Initialisation.
        -> variable 'i' is set to the minimum value.
    i <= x;
        -> Condition check.
        -> This condition is checked before every iteration. If the condition is TRUE, loop executes one more time.
    ++i;
        -> Update Statement.
        -> short form of i = i+1;
        -> Increases value of i by 1 after every iteration.(Before the condition check happens)

    **/
    printf("sum | i | updated_sum\n");
    for(int i = 1; i <= x; ++i)
    {
        printf("\n%d + %d = ",sum, i);
        sum = sum + i;
        printf("%d",sum);
    }

    printf("\nSum of first %d natural numbers is: %d", x, sum);

	getchar();
	return 0;
}
