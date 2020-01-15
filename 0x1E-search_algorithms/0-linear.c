#include <stdio.h>
#include "search_algos.h"
/**
* linear_search - Function that seaches for a value in an array of integers
* using Linear search
* @array: pointer to the first element of the array to seach in
* @size: number of elements in array
* @value: value to search for
* Return: The first index where value is located, otherwise -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
