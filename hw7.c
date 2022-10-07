//HW #7: Trey Marlette
#include <stdio.h>

//Function prototypes
char menu();
double getFirstN();
double getSecondN();

int main(void)
{
    printf("HW #7: Trey Marlette\n");

    //Loops until user enter 'q'
    while (1)
    {
        double number1, number2;
        char choice = menu(); //Gets menu option that user enters

        switch (choice)
        {   
            //Addition 
            case 'a':
                number1 = getFirstN();
                number2 = getSecondN();
                printf("%0.1lf + %0.1lf = %0.1lf\n",number1, number2, (number1+number2));
                break;

            //Subtraction
            case 's':
                number1 = getFirstN();
                number2 = getSecondN();
                printf("%0.1lf - %0.1lf = %0.1lf\n",number1, number2, (number1-number2));
                break;

            //Multiplication
            case 'm':
                number1 = getFirstN();
                number2 = getSecondN();
                printf("%0.1lf * %0.1lf = %0.1lf\n",number1, number2, (number1*number2));
                break;

            //Division
            case 'd':
                number1 = getFirstN();
                printf("Enter second number: ");
                while(1)
                {
                    if(scanf("%lf",&number2))
                        break;
                    else
                        while (getchar() != '\n'); //clear buffer
                        printf("Please enter a number, such as 2.5, -1.78E8 or 3: ");
                }

                //Makes sure user doesn't divide by 0
                while(number2 == 0)
                {   
                    while (getchar() != '\n'); //clear buffer
                    printf("Enter a number other than 0: ");
                    scanf("%lf",&number2);

                    if(number2 != 0)
                        break;
                }

                printf("%0.1lf / %0.1lf = %0.1lf\n",number1, number2, (number1/number2));
                break;

            case 'q':
                printf("Bye.");
                return 0;

            //If user doesn't enter a valid menu option, clears buffer and resets loop
            default:
                while (getchar() != '\n');
                printf("Invalid Input\n");
        }
    }   
    return 0;
}


char menu()
{
    char choice;
    printf("Enter the operation of your choice: ");
    printf("\na. add%10ss. subtract\n", " ");
    printf("m. multiply%5sd. divide\n", " ");
    printf("q. quit\n");
    
    scanf(" %c",&choice);

    return choice;
}

//Gets first number and validates it
double getFirstN()
{
    double n;
    printf("Enter the first number: ");
    while(1)
    {   
        //if user unput is valid, exit loop 
        if(scanf("%lf",&n))
            break;
        else
        {   
            while (getchar() != '\n'); //clear buffer
            printf("Please enter a number, such as 2.5, -1.78E8 or 3: ");
        }
                    
    }
    return n;
}


//Gets second number and validates it
double getSecondN()
{
    double n;
    printf("Enter the second number: ");
    while(1)
    {   
        //if user unput is valid, exit loop    
        if(scanf("%lf",&n)) 
            break;
        else
        {
            while (getchar() != '\n'); //clear buffer
            printf("Please enter a number, such as 2.5, -1.78E8 or 3: ");
        }
                    
    }
    return n;
}

/*
HW #7: Trey Marlette
Enter the operation of your choice: 
a. add          s. subtract
m. multiply     d. divide
q. quit
a
Enter the first number: 22.4
Enter the second number: one
Please enter a number, such as 2.5, -1.78E8, or 3: 1
22.4 + 1.0 = 23.4
Enter the operation of your choice: 
a. add          s. subtract
m. multiply     d. divide
q. quit
d
Enter the first number: 18.4
Enter second number: 0
Enter a number other than 0: 0.2
18.4 / 0.2 = 92.0
Enter the operation of your choice:
a. add          s. subtract
m. multiply     d. divide
q. quit
q
Bye.
*/