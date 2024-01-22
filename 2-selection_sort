#include"sort.h"

/**
 * selection_sort - sorts an array of integers in ascending by Selection sort
 * @array: array to be sorted
 * @size: array size
 * Return: nothing
 */

void selection_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;

	for(i = 0; i < size; i++)
	{
		temp = array[i];
		j = i;
		while(array[j] < temp)
		{
			temp = array[j];
			j++;
		}
		j--;
		array[j] = array[i];
		array[i] = temp;
		print_array(array, size);
	}
}
