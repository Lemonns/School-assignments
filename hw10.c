//HW #10: Trey Marlette
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define NROW 5
#define NCOL 6 

//Prototypes
double dRand(void);
double dAvg(double nArr[], int nSize);
double dMax(int rows, int cols, double array[][cols]);
void dSelectionSort(double array[], int n);
void sortRows(int rows, int cols, double array[][cols]);

int main(void)
{
    printf("HW #10: Trey Marlette\n");
    srand((unsigned int) time(0));

    double arr[NROW][NCOL];
    double avg, avgTot, maxN;
    
    //Initialize array with random doubles
    for (int i = 0; i < NROW; i++)
        for (int j = 0; j < NCOL; j++)
            arr[i][j] = dRand();
    
    //Sort 2d array rows
    for (int i = 0; i < NROW; i++)
        dSelectionSort(arr[i], NCOL);
    sortRows(NROW, NCOL, arr);


    //Prints the row values and averages    
    for (int i = 0; i < NROW; i++)
    {
        avg = dAvg(arr[i], NCOL);
        avgTot+=avg; //Adds average of each row into variable
        printf("\nRow %d Avg = %lf: ", i, avg);
        for (int j = 0; j < NCOL; j++)
            printf("%lf ", arr[i][j]);
    }

    //Prints max value of all arrays
    maxN = dMax(NROW, NCOL, arr);
    printf("\n\nTotal Avg = %lf", avgTot/NROW); //Prints and calculates average all rows combined
    printf("\nMax = %lf", maxN);
    

    return 0;
}

//Returns a random double
double dRand(void)
{
    return rand() * -10.0/RAND_MAX;
}

//Finds average of row
double dAvg(double nArr[], int nSize)
{
    double sum = 0, avg;
    int count;
    for (count = 0; count < nSize; count++)
        sum+=nArr[count];
    avg = sum / count;
    return avg;
}

//Finds max value of all arrays
double dMax(int rows, int cols, double array[][cols])
{
    double max = array[0][0];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (array[i][j] > max)
                max=array[i][j];
    return max;
}

//Sort elements within 2d array
void dSelectionSort(double array[], int nSize) {
    for (int i = 0; i < nSize - 1; i++) 
    {
        int min = i;
        for (int j = i+1; j < nSize; j++) 
            if (array[j] > array[min])
                min = j;

        double *p1 = &array[min], *p2 = &array[i];
        double temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }
}

//Sort rows in descending order
void sortRows(int rows, int cols, double array[][cols])
{
    for (int i = 0; i < rows; i++)
    { 
        for (int j = i; j > 0; j--) 
        {
            if (*array[j] > *array[j-1])
            {
                double temp[cols];
                memcpy (temp, array[j], rows*cols);
                memcpy (array[j], array[j-1], rows*cols);
                memcpy (array[j-1], temp, rows*cols);
            }
        }
    }
}

/*
HW #10: Trey Marlette

Row 0 Avg = -4.371261: -0.040590 -1.635487 -1.823176 -5.400517 -7.704398 -9.623402
Row 1 Avg = -4.887895: -0.079653 -3.105564 -5.007172 -5.469527 -6.257820 -9.407636
Row 2 Avg = -5.401898: -0.802332 -1.655934 -4.480728 -7.048677 -8.561052 -9.862667 
Row 3 Avg = -3.962362: -1.150243 -2.019410 -4.527726 -5.182295 -5.092318 -5.802179
Row 4 Avg = -4.699695: -4.248177 -6.531266 -6.791894 -2.047472 -4.125797 -4.453566 

Total Avg = -4.664622
Max = -0.040590
*/