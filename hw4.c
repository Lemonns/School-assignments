//HW #4: Trey Marlette
#include <stdio.h>

int main(void)
{
    printf("HW #4: Trey Marlette\n");

    char name[25];
    int heightInches, feet, inches; 

    printf("Enter your height in inches and your first name. (type 'q' to quit): "); 
    while (scanf("%d%24s", &heightInches, name) && name[0] != 'q') //Continues to loop until user enter q
    {
        feet = heightInches / 12; //Converts user inches into feet
        inches = heightInches % 12; //Left over inches
        printf("%s's height is %d foot %d inches.\n", name, feet, inches); 

        printf("Enter your height in inches and your first name. (type 'q' to quit): "); 
    }
    
    return 0;
}



/*

HW #4: Trey Marlette
Enter your height in inches and your first name. (type 'q' to quit): 72 John
John's height is 6 foot 0 inches.
Enter your height in inches and your first name. (type 'q' to quit): 67 Jane  
Jane's height is 5 foot 7 inches.
Enter your height in inches and your first name. (type 'q' to quit): q

*/
