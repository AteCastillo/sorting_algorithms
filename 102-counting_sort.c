#include "sort.h"

/**
 * counting_sort - order an array using the algorithm counting_sort
 * @array: the array
 * @size: the size of the array
 * Return: Nothing
 */

void counting_sort(int *array, size_t size)
{
	int *count_array = NULL;
	int max = 0, i = 0, count = 0, j = 0, k = 0, index = 0;

	if (array == NULL || size < 2)
		return;

	max = max_value(array, size);
	count_array = malloc(sizeof(int) * max + 1);
	for (; i < max + 1; i++)
	{
		count += count_elements_in_array(array, size, i);
		count_array[i] = count;
		if (i != max)
			printf("%d, ", count_array[i]);
		else
			printf("%d\n", count_array[i]);
	}
	for (; j < max + 1; j++)
	{
		if (count_array[j + 1] > count_array[j] && j + 1 <= max)
		{
			k = count_array[j + 1] - count_array[j];
			for (; k > 0; k--)
			{
				array[index] = j + 1;
				index++;
			}
		}
	}
	free(count_array);
}

/**
 * count_elements_in_array - count elements
 * @array: the array
 * @size: the size of the array
 * @num: int received
 * Return: an int with the number of elements in the array
 */
int count_elements_in_array(int *array, size_t size, int num)
{
	size_t i = 0;
	int count = 0;

	for (; i < size; i++)
	{
		if (array[i] == num)
		{
			count++;
		}
	}
	return (count);
}

/**
 * max_value - to know the maximun value in the array
 * @array: the array
 * @size: the size of the array
 * Return: max value
 */
int max_value(int *array, size_t size)
{
	size_t i = 0;
	int max = 0;

	if (array == NULL || size == 0)
		return (0);

	max = array[0];
	for (; i < size; i++)
	{
		if (max < array[i])
			max = array[i];
	}
	return (max);
}
