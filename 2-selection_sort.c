#include "sort.h"
/**
 * selection_sort - sorts array of integers in using selection sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, k, min, temp;

	if (array)
	{
	for (i = 0; i < size; i++)
	{
		min = i;
		for (k = i + 1; k < size; k++)
		{
			if (array[min] > array[k])
			{
				min = k;
			}
		}
		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
	}
}
