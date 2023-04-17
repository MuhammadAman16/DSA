using namespace std;
#include <iostream>
#include <cmath>
#include <memory>

int main()
{
    int row, col;
    cout << "Enter Number of Rows";
    cin >> row;
    int *colArray = new int[row];
    int **TDA = new int *[row];
    for (int i = 0; i < row; i++)
    {
        cout << "Enter number of columns for " << i << " row: ";
        cin >> col;
        colArray[i] = col;
    }

    for (int i = 0; i < row; i++)
    {
        TDA[i] = new int[colArray[i]];
        for (int j = 0; j < colArray[i]; j++)
        {
            cout << "Enter value for index ";
            cout << i << " " << j << " : ";
            cin >> TDA[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colArray[i]; j++)
        {
            cout << TDA[i][j];
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++)
    {
        delete[] TDA[i];
    }
    delete[] TDA;
    delete[] colArray;
}