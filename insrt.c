#include "sort.h"

void insert(int *array, size_t size)
{
    size_t i;
    int j;
    int temp;

    for (i = 1; i < size; i++)
    {
        temp = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > temp)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = temp;
    }
}
