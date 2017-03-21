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

#define MAXELS 10
/* Function Prototypes */
void MaxMin(int numvals, int vals[], int* min, int* max);
/* Main Program */
int main(int argc, char *argv[])
{
	int nums[MAXELS] = {2, 18, 1, 27, 16};
	int i, max;

	max = nums[0];

	printf("Generating random list\n");
	for (i = 1; i < MAXELS; i++)
	{
		if (max < nums[i])
		{
			max = nums[i];
		}
	}
	printf("The maximum value is %d\n", max);

	return 0;
}


/* Function Defenitions */
void MaxMin(int numvals, int vals[], int* min, int* max)
{

	return;
}


