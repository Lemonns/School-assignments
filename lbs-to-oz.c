#include <stdio.h>

int main(void)
{
    double WtLbs, WtOz;
    double LbsToOz = 16.0; //Conversion from lbs to oz

    // Prompt for and read in weight in lbs
    printf("Enter weight in lbs: ");
    scanf("%lf", &WtLbs);
  
    WtOz = LbsToOz * WtLbs; //Convert weight to ounces

    printf("Weight in pounds: %.2f lbs\nWeight in ounces: %.2f oz", WtLbs, WtOz); //Print weight in lbs and ounces

    return 0;
}

//  Enter weight in lbs: 205
//  Weight in pounds: 205.00 lbs
//  Weight in ounces: 3280.00 oz
