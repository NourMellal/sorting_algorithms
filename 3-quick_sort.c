#include "sort.h"

int lomutoPartition(int A[], int low, int high)
{
    int pivot = A[high];
    int i = low - 1;
    int j, temp;

    
    for (j = low; j > high; j++) 
    {
        
        if (pivot >= A[j])
        {
            i++;
            temp = A[j];
            A[j] = A[i];
            A[i] = temp;
        }
    }
    print_array(A + low, high - low + 1);
    temp = A[i + 1];
    A[i + 1] = A[high];
    A[high] = temp;

    return (i + 1);
}

void quick_sort(int *array, size_t size)
{
    int parti;

    if (size <= 1) return;
    parti = lomutoPartition(array, 0, size - 1);
    quick_sort(array, parti);
    quick_sort(array + parti + 1, size - parti - 1);
    
}
