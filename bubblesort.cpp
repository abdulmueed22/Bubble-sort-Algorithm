#include <iostream>
using namespace std;

int main()
{
    const int size = 11;
    int a[size] = {0, 2, 7, 1, 3, 9, 5, 8, 7, 6, 4};
    int temp, pass, i, j;

    // The outer loop iterates for 'pass' times, where 'pass' ranges from 0 to size-1.
    for (pass = 0; pass < size - 1; pass++)
    { // Corrected the loop condition
        // The inner loop compares and swaps adjacent elements if they are out of order.
        for (j = 0; j < size - pass - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                // Swap a[j] and a[j+1] if they are in the wrong order.
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Print the sorted array.
    for (i = 0; i < size; i++)
    {
        cout << a[i] << ", ";
    }

    return 0;
}
