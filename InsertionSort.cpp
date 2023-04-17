using namespace std;
#include <iostream>

void insertionSort(int *a, int n)
{
    int key, j;
    for (int i = 1; i <= n - 1; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        // AS THE WHILE LOOP RETURNS THE INDEX OF J, WHICH IS OF THE VALUE SMALLER THAN THE NEW VALUE OR THE ARRAY IS FULLY ITERATED
        a[j + 1] = key;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
};
int main()
{
    int array[6] = {21, 42, 23, 24, 51, 26};
    insertionSort(array, 6);
}