#include "sort.h"

void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

void sort(int *arr, int i, int N)
{

    int temp;

    while (i * 2 + 1 < N)
    {

        if ((i * 2 + 1 == N - 1) || (arr[i * 2 + 1] > arr[i * 2 + 2]))
            temp = i * 2 + 1;
        else
            temp = i * 2 + 2;

        if (arr[i] < arr[temp])
        {
            swap(&arr[i], &arr[temp]);
            i = temp;
        }
        else break;
    }
}

void Heap(int *arr, int N)
{

    for (int i = N / 2 - 1; i >= 0; i--)
    {
        sort(arr, i, N);
    }

    for (int i = N - 1; i > 0; i--)
    {
        swap(&arr[0], &arr[i]);
        sort(arr, 0, i);
    }
}