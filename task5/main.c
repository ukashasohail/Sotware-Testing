#include <stdio.h>


void array_sorter(int a[], int n)
{

    // bubble sort algorithm
    int i = 0, j = 0, tmp;
    for (i = 0; i < n; i++)
    { 
        for (j = 0; j < n - i - 1; j++)
        { 
            if (a[j] > a[j + 1])
            { 
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}
int main()
{
    // array to be sorted
    int a[10] = {15,13,9,18,4,22,17,3,54,7};

    // number until it should be sorted
    int n = 6;

    // calling sorter function
    array_sorter(a, n);

    // Printing the sorted array
    printf("Printing the sorted array:\n");
    for (int i = 0; i < 10; i++){
        printf("%d\n", a[i]);
    }

    return 0;
}
