//HW #5: Trey Marlette
#include <stdio.h>

int main(void)
{
    printf("HW #5: Trey Marlette\n");

    int userN; //User input
    long long f; // factorial
    
    printf("Enter a number less than 21 (Type '0' to quit): "); //Prompts user to enter number
    while (scanf("%d", &userN) && userN != 0) //Continuously runs until user types 0
    {   
        f = 1;
        for (int i = 1; i <= userN; i++) //Runs calculations for factorial
        {
            f = i * f; //Calculates factorial
        }
        printf("The factorial of %d is %lld\n", userN, f); //Prints factorial and user's input
        printf("Enter a number less than 21 (Type '0' to quit): "); //Prompts user to enter number
    }

    return 0;
}


/*

HW #5: Trey Marlette
Enter a number less than 21 (Type '0' to quit): 5
The factorial of 5 is 120
Enter a number less than 21 (Type '0' to quit): 15
The factorial of 15 is 1307674368000
Enter a number less than 21 (Type '0' to quit): 0

*/
