using namespace std;
#include <iostream>

int LinearSearch()
{
    int array[10] = {1,
                     2,
                     3,
                     4,
                     5,
                     6,
                     7,
                     8,
                     10};

    int num;
    cout << "Enter Number To Find In Array: ";
    cin >> num;
    for (int i = 0; i < 10; i++)
    {
        if (array[i] == num)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int ans = LinearSearch();
    if (ans == -1)
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Found at Index " << ans + 1;
    }
}