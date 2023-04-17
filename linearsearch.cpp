using namespace std;
#include <iostream>

int main()
{
    int array[10];
    for (int i = 0; i < 10; i++)
    {
        array[i] = i + 1;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << endl;
    }
    return 0;
}