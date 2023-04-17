using namespace std;
#include <iostream>
#include <cmath>
#include <memory>

int main()
{
    int col = 3;
    int row = 3;
    int **TDA = new int *[row];

    cout << "Enter Value";
    for (int i = 0; i < row; i++)
    {
        TDA[i] = new int[col];
        for (int j = 0; j < col; j++)
        {
            cout << "for index " << i << j << ": ";
            cin >> TDA[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            cout << TDA[i][j];
            cout << " ";
        }
        cout << endl;
    }
}
