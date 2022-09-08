//HW #3: Trey Marlette
#include <stdio.h>
#include <string.h>

int main(void)
{   
    printf("HW #3: Trey Marlette\n");

    char fName[25], lName[25]; //Variables for first and last name strings
    int fLength, lLength; //Variables for length of names

    printf("Enter your first and last name (separate with a space): ");
    scanf("%24s%24s", &fName, &lName); //Takes in user input and assigns string to fName and lName

    //Converts the first and last name strings into the lengths of them
    fLength = strlen(fName);
    lLength = strlen(lName);

    printf("%s %s\n", fName, lName);
    printf("%*d %*d\n\n", fLength, fLength, lLength, lLength); //Prints the length of each name and makes sure the integer 
                                                           //is right justified
    float fvar;
    double dvar;

    fvar = 1.0/3.0;
    dvar = 1.0/3.0;
    printf("%.4f %.12f %.16f\n", fvar, fvar, fvar); //Prints float type
    printf("%.4lf %.12lf %.16lf\n", dvar, dvar, dvar); //Prints double type
    
    return 0;
}

/*

HW #3: Trey Marlette
Enter your first and last name (separate with a space): Trey Marleete
Trey Marleete
   4        8

0.3333 0.333333343267 0.3333333432674408
0.3333 0.333333333333 0.3333333333333333

*/
