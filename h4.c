//HW #4: Trey Marlette
#include <stdio.h>

int main(void)
{
    printf("HW #4: Trey Marlette\n");

    char name[25];
    int heightInches;
    int feet;
    int inches;

    printf("Enter your height in inches and your first name. (type 'q' to quit): "); 
    while (scanf("%d%24s", &heightInches, name) && name[0] != 'q')
    {
        feet = heightInches / 12;
        inches = heightInches % 12;
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
