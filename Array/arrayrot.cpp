#include <iostream>

using namespace std;

void singleRotateLeft(int array[], int n)
{
    int temp, i;
    temp = array[0];
    for (i = 0; i < n - 1; i++)
    {
        array[i] = array[i + 1];
    }
    array[i] = temp;
}

void multipleRotateLeft(int array[], int j, int n)
{
    for (int i = 0; i < j; i++)
    {
        singleRotateLeft(array, n);
    }
}

void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    multipleRotateLeft(arr, 3, n);

    printArray(arr, n);

    return 0;
}
