#include "sort.h"


/**
 *bubble_sort - sorts an array of int ascending order using the Bubble sort
 *@array: array to be sorted
 *@size: size of the array
 *Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	if (array)
	{
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] <= array[j + 1])
				continue;
			else
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
	}
}
