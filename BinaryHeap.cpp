using namespace std;
#include <iostream>
#include <cmath>
#include <memory>

// LEC 11 BINARY HEAP TREE /PRIORITY QUEUE--DONE
void minOrder()
{
    int data;
    int array[5];
    cout << "Enter 5 data For min order heap tree, index ";
    for (int i = 1; i < 6; i++)
    {
        cout << i;
        cout << " :";
        cin >> data;
        array[i] = data;
        int j = i;
        while (j != 1)
        {
            if (array[j] <= array[j / 2])
            {
                int temp;
                temp = array[j / 2];
                array[j / 2] = array[j];
                array[j] = temp;
                j = (j / 2);
            }
            else
            {
                break;
            }
        }
    }
    for (int i = 1; i < 6; i++)
    {
        cout << array[i];
        cout << " ";
    }
    cout << endl;
}
void maxOrder()
{
    int value;
    cout << "Enter Number of elements for Max heap sort: ";
    cin >> value;
    int *array = new int[value];
    for (int i = 1; i < value + 1; i++)
    {
        cout << "Enter value for " << i << " index: ";
        cin >> array[i];
        int j;
        j = i;
        while (j != 1)
        {
            if (array[j] >= array[j / 2])
            {
                int temp;
                temp = array[j / 2];
                array[j / 2] = array[j];
                array[j] = temp;
                j = (j / 2);
            }
            else
            {
                break;
            }
        };
    }
    for (int i = 1; i < value + 1; i++)
    {
        cout << array[i];
        cout << " ";
    }
};

int main()
{
    minOrder();
    maxOrder();
}