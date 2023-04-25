#include "sort.h"

/**
 * Bubble_sort - addd numeric numbers 
 * main - Entry point 
 * Return: always returns 0 
 */
int main(void)
{
	size_t i, index, tmp = 0;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
		for (index = 0; index < size; index++)
		{
			if (array[index] > array[index + 1] && array[index + ])
				tmp = array[index];
			array[index] = array[index +1];
			array[index + 1] = tmp;
			print_array(array, size);
		}
}
