#include "sort.h"

/**
 * swap - swap two int
 * @a: int
 * @b: int
 * Return: (void) Swaped int
 */
void swap(int *a, int *b)
{
  int tmp;
  
  tmp = *a;
  *a = *b;
  *b = tmp;
}
/**
 * partition - Partition an array and using pivot
 * @array: Array
 * @low: int
 * @high: int
 * @size: size of array (size _t)
 * Return: index of pivote (int)
 */

int partition(int *array, int low, int high, size_t size)
{
  int pivot = array[hgh];
  int x = low - 1, y;
  
  for (y = low; y <= high; y++)
  {
    if (array[y] <= pivot)
    {
      x++;
      if (x != y)
      {
        swap (&array[x], &array[y]);
        print_array(array, size);
      }
    }
  }
  return (x);
}

/**
 * lomuto_qsort - Sorting Recursively an array
 * @array: Array to be sorted 
 * @low: The lowest value of the array
 * @high: highest value of the array
 * @size: Size of the array
 * Return: void
 */

void lomuto_qsort(int *array, int low, int high, size_t size)
{
  int i;
  
  if (low < high)
  {
    i = partition(array, low, high, size);
    lomuto_qsort(array, low, i - 1, size);
    lomuto_qsort(array, i + 1, high, size);
  }
}

/**
 * quick_sort - Quick Sort Algorithm using lomuto partition
 * @array: Array to sort
 * @size: Size of the array
 * Return: Soteed Array (Void)
 */

void quick_sort(int *array, size_t size)
{
  lomuto_qsort(array, 0, size - 1, size);
}
