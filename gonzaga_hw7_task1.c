/*
 * =====================================================================================
 *
 *       Filename:  gonzaga_hw7_task1.c
 *       	Usage:  ./gonzaga_hw7_task1.c
 *    Description: Hw 7 Task 1. Prograom that initializes an array of double  					and then copies the contents of the array into three oth					er arrays. 
 *
 *        Version:  1.0
 *        Created:  03/17/2017 03:10:59 AM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Chris Werner (), christopherwerner@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>		/* For Standard Library*/
#define LEN 5

/* Function Prototypes */
void show_arr(const double ar[], double n);
void copy_arr(double ar1[], const double ar2[], int n);
void copy_ptr(double* ar1, const double* ar2, int n);
void copy_ptrs(double* ar2, const double* start, const double* end);

/* Main Program */
int main(int argc, char *argv[])
{
	double source[LEN] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[LEN];
	double target2[LEN];
	double target3[LEN];
	printf("Source array: ");
	show_arr(source, LEN);
	printf("\nCopied by subscript: ");
	copy_arr(target1, source, LEN);
	show_arr(target1, LEN);
	printf("\nCopied by pointer: ");
	copy_ptr(target2, source, LEN);
	show_arr(target2, LEN);
	printf("\nCopied using pointer range: ");
	copy_ptrs(target3, source, source +4);
	show_arr(target3, LEN);
	printf("\n");
	return 0;
}


/* Function Defenitions */
void show_arr(const double ar[], double n)
{
	printf("{");
		for (int i = 0; i < n; i++)
		{
			printf("%3.1lf ", ar[i]);
		}
	printf("}");
	return;
}
void copy_arr(double ar1[], const double ar2[], int n)
{
	for (int i = 0; i < n; i++)
		ar1[i] = ar2[i];
	return;
}
void copy_ptr(double* ar1, const double* ar2, int n)
{
	for (int i = 0; i < n; i++)
	{
		*(ar1++) = *(ar2++);
	}
	return;
}
void copy_ptrs(double* ar2, const double* start, const double* end)
{
	while (1)
	{
		*(ar2++) = *(start++);
		if (start == end)
		{
			break;
		}
	}

	return;
}
