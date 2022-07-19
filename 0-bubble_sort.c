#include "sort.h"
/**
 * bubble_sort - sorts array using bubble sort algorithm
 * @array: the array to be sorted
 * @size: size of array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, k, hld = size;
	int temp;

	if (array)
	{
	for (i = 0; i < hld; i++)
	{
		for (k = 0; k < hld; k++)
		{
			if (array[k] > array[k + 1])
			{
				temp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = temp;
				print_array(array, size);
			}
		}
		hld--;
	}
	}
}
