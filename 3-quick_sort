#include "sort.h"
/**
 * partition - function to find sub array from the main array
 * @array: the array
 * @size: size of the array
 * @low: the start position
 * @high: the end position
 *Return : int of the sorted element index
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[low], start = low, end = high, temp;

	while(start < end)
	{
		while(array[start] <= pivot)
			start++;
		while(array[end] > pivot)
			end--;
		if (start < end)
		{
			temp = array[start];
			array[start] = array[end];
			array[end] = temp;
			print_array(array, size);
		}
	}
	temp = array[start];
	array[start] = array[end];
	array[end] =temp;
	print_array(array, size);
	return end;
}


/**
 * quicksort - function call partition function
 * @array: the array
 * size: size of the array
 * @low: the start position
 * @high: the end position
 * Return: nothin
 */
void quicksort (int *array, int low, int high, size_t size)
{
	int loc;
	if(low < high)
	{
		loc = partition(array, low, high, size);
		quicksort(array, low, loc - 1, size);
		quicksort(array, loc + 1, high, size);
	}
}
/**
 * quick_sort - sort array useing qich sort method
 * @array: the array
 * @size: size of the array
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quicksort(array, 0, (int)size - 1, size);
}
