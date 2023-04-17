using namespace std;
#include <iostream>
#include <cmath>
#include <memory>

int main()
{
    int *array = new int[5];
    for (int i = 0; i < 6; i++)
    {
        array[i] = i + 1;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << array[i];
    }
}