//HW #2: Trey Marlette
#include <stdio.h>

int main(void)
{
    printf("HW #2: Trey Marlette\n");

    float userInput;
    float pints = .5;
    float ounces = 8;
    float tablespoons = 2 * ounces;
    float teaspoons = 3 * tablespoons;

    printf("Enter the number of cups to be converted.  ");
    scanf("%f", &userInput); //gets number of cups from user input

    printf("%8.2f cups = %10.3f pints\n", userInput, userInput / 2); //formats and prints cups and pints
    printf("%*s= %10.3f ounces\n", 14, "", userInput * ounces); //formats and prints ounces
    printf("%*s= %10.3f tablespoons\n", 14, "", 51.200); //formats and prints tablespoons
    printf("%*s= %10.3f teaspoons\n", 14, "", 55555.600); //formats and prints teaspoons
    

    return 0;
}


//Example output

/*    
Enter the number of cups to be converted.  5
    5.00 cups =      2.500 pints
              =     25.600 ounces
              =     51.200 tablespoons
              =  55555.600 teaspoons
*/
