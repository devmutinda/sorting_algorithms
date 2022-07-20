#include "sort.h"
/**
 * partition - partitions and swaps
 * @array: the array
 * @low: left index
 * @high: right index
 * Return: size_t
 */
int partition(int *array, int low, int high)
{
	int i, j, pivot, tmp;
	static int size, k;

	if (k == 0)
	{
		size = high + 1;
		k++;
	}
	pivot = array[high];
	i = low;
	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != high)
	{
		tmp = array[i];
		array[i] = array[high];
		array[high] = tmp;
		print_array(array, size);
	}
	return (i);
}
/**
 * quick_search - sorts array
 * @array: the array
 * @left: left index
 * @right: right index
 * Return: void
 */
void quick_search(int *array, int left, int right)
{
	int p;

	if (left < right)
	{
		p = partition(array, left, right);
		quick_search(array, left, p - 1);
		quick_search(array, p + 1, right);
	}
}
/**
 * quick_sort - sorts array of integers using quick sort algorithm
 * @array: array of integers
 * @size: size of array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array)
		quick_search(array, 0, size - 1);
}
