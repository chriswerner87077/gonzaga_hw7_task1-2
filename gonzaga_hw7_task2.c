/*
 * =====================================================================================
 *
 *       Filename:  gonzaga_hw7_task2.c
 *       	Usage:  ./gonzaga_hw7_task2.c
 *    Description:  Homework Task 2
 *
 *        Version:  1.0
 *        Created:  03/21/2017 04:04:13 AM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Braxton Greenwell (), braxtongreenwell@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#include <time.h>

#define MAXELS 10
/* Function Prototypes */
void MaxMin(int numvals, int vals[], int* min, int* max);
/* Main Program */
int main(int argc, char *argv[])
{
	int ar1[MAXELS], min, max;
	printf("Generating random list\n");
	srand(time(NULL));
	printf("This list is: \n");

	MaxMin(MAXELS, ar1, &min, &max);

	return 0;
}


/* Function Defenitions */
void MaxMin(int numvals, int vals[], int* min, int* max)
{
	for (int i = 0; i < MAXELS; i++)
	{
		vals[i] = rand() % 99;
	}
	for (int j = 0; j < MAXELS; j++)
	{
		printf("%d ", vals[j]);
		if (*max < vals[j])
		{
			*max = vals[j];
		}
		if (*min > vals[j])
		{
			*min = vals[j];
		}
	}

	
	printf("\nThe maximum value is: %d\n", *max);
	printf("The minimum value is: %d\n", *min);
	return;
}


