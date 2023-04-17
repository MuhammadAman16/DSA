using namespace std;
#include <iostream>

void selectionSort(int array[], int size)
{
    int min;
    for (int i = 0; i < size - 1; i++)
    {
        min = array[i];
        for (int j = i; j < size - 1; j++)
        {
            if (min > array[j + 1])
            {
                int swap = array[j + 1];
                array[j + 1] = min;
                min = swap;
            };
        }
        array[i] = min;
    }

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
};

int main()
{
    int array[] = {23, 4, 0, 11, 9};
    int x = sizeof(array) / sizeof(array[0]);
    selectionSort(array, x);
};
