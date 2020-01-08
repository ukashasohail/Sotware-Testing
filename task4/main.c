#include <stdio.h>

void sorter(int x, int y, int z)
{

    // storing 3 arguments in array
    int a[4] = { x, y, z};

    //setting length of array
    int n = 3;

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

    // Printing sorted array
    printf("Printing the sorted array:\n");

    for (int i = 0; i < n; i++)
        printf("%d\n", a[i]);
}

int main()
{
    // calling sorter function 
    sorter(256, 14, 184);
       
    return 0;
}