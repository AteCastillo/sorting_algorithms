#include "sort.h"

/**
 * counting_sort - order an array using the algorithm counting_sort
 * @array: the array
 * @size: the size of the array
 * Return: Nothing
 */

void counting_sort(int *array, size_t size)
{
	int max = 0;

	max = max_value(array, size);

}

int count_elements_in_array(int * array, size_t size, int num)
{
	


}

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

