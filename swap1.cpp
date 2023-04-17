using namespace std;
#include <iostream>
#include <cmath>
#include <memory>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 12;
    int y = 6;
    swap(x, y);
    cout << "Value at X: " << x;
    cout << endl;
    cout << "Value at Y: " << y;
}