using namespace std;
#include <iostream>

void bubblesort(int array[], int size)
{
    for (int i = 0; i < (size - 1); i++)
    {
        for (int j = 0; j < (size - i - 1); j++)
        {

            if (array[j] > array[j + 1])
            {
                int swap = array[j];
                array[j] = array[j + 1];
                array[j + 1] = swap;
            }
        }
    }
    for (int i = 0; i < 8; i++)
    {
        cout << array[i] << " ";
    }
}

int main()
{
    int array[] = {2, 11, 3, 6, 8, 2, 5, 8};
    bubblesort(array, 8);
}
