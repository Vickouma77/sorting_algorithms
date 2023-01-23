#include "sort.h"
void swap(int *array, int before, int after, int size);

/**
 * bubble_sort - an algorithm that implements bubble sort
 * @array: the array
 * @size: size of the array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	int count;
	unsigned int i, a;

	if (size < 2)
		return;
	count = 0;
	for (a = 0; a < size - 1; a++)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array, i, i + 1, size);
				count++;
			}
		}
		if (count < 1)
		{
			break;
		}
		count = 0;
	}
}
/**
 * swap - swap in two placees
 * @array: the array
 * @before: the first index
 * @after: the second index
 * @size: the size of the array
 * Return: nothing
 */
void swap(int *array, int before, int after, int size)
{
	int value;

	value = array[after];
	array[after] = array[before];
	array[before] = value;
	print_array(array, size);
}
