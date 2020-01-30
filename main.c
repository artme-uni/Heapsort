#include "sort.h"

int main(int argc, char **argv) {

    int N = argc - 1;

    int *arr = malloc((N) * sizeof(int));

    for (int i = 0; i < N; i++)
        arr[i] = atoi(argv[i + 1]);

    Heap(arr, N);

    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
        if (i == N - 1)
            printf("\n");
    }

    return 0;
}