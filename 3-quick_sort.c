#include "sort.h"
/**
 * partition - partitions array
 * @array: the array
 * @l: left index
 * @r: right index
 * @n: size of array
 * Return: int
 */
int partition(int *array, int l, int r, size_t n)
{
	int temp, p;

	p = r;

	while (l < r)
	{
		r = p - 1;
		if (array[l] > array[p])
		{
			temp = array[l];
			array[l] = array[r];
			array[r] = array[p];
			array[p] = temp;
			p--;
		}
		else
			l++;
	}
	print_array(array, n);

	return (p);
}
/**
 * sort_array - recursively sorts array
 * @array: integer array
 * @l: left index
 * @r: right index
 * @size: size of array
 * Return: void
 */
void sort_array(int *array, int l, int r, size_t size)
{
	int p;

	if (l < r)
	{
		p = partition(array, l, r, size);
		sort_array(array, l, p - 1, size);
		sort_array(array, p + 1, r, size);
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
		sort_array(array, 0, size - 1, size);
}
