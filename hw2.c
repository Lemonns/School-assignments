//HW #2: Trey Marlette
#include <stdio.h>


int main(void)
{
    printf("HW #2: Trey Marlette\n");

    float userInput;

    //Conversions
    const float PINTS = 2;
    const float OUNCES = 8;
    const float TABLESPOONS = 2 * OUNCES;
    const float TEASPOONS = 3 * TABLESPOONS;
    
    printf("Enter the number of cups to be converted.  ");
    scanf("%f", &userInput); //Gets number of cups from user input

    printf("%8.2f cups = %10.3f pints\n", userInput, userInput / PINTS); //Formats and prints cups and pints
    printf("%*s= %10.3f ounces\n", 14, "", userInput * OUNCES); //Formats and prints ounces
    printf("%*s= %10.3f tablespoons\n", 14, "", userInput * TABLESPOONS); //Formats and prints tablespoons
    printf("%*s= %10.3f teaspoons\n", 14, "", userInput * TEASPOONS ); //Formats and prints teaspoons
    

    return 0;
}



//Example output

/*    

HW #2: Trey Marlette
Enter the number of cups to be converted.  3.2
    3.20 cups =      1.600 pints
              =     25.600 ounces
              =     51.200 tablespoons
              =    153.600 teaspoons

*/
