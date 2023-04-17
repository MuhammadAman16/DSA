using namespace std;
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <cstring>
#include <sstream>
int main()
{
    string intext;
    string text;
    int *value;
    char *index;
    int temp;
    const char undirected = 'U';
    const char weight = 'W';

    ifstream vector("coordinates.txt");

    while (getline(vector, intext))
    {
        text.append(intext);
    }
    int sizeOfArray = text.length();
    char mytext[sizeOfArray];
    strcpy(mytext, text.c_str());
    index = strtok(mytext, ",");

    value = new int[((sizeOfArray / 2))];

    for (int i = 0; i < ((sizeOfArray / 2)); i++)
    {
        temp = atoi(index);
        value[i] = temp;
        index = strtok(NULL, ",");
    };
    for (int i = 0; i < ((sizeOfArray / 2)); i++)
    {
        cout << value[i];
    }
    int **TDA = new int *[value[0]];

    for (int i = 0; i < value[0]; i++)
    {
        TDA[i] = new int[value[0]];
        for (int j = 0; j < value[0]; j++)
        {
            TDA[i][j] = 0;
        };
    };
    if (text.find(undirected) != string::npos)
    {
        int m = 4;
        for (int i = 0; i < value[1]; i++)
        {
            TDA[value[m]][value[++m]] = 1;
            TDA[value[m]][value[--m]] = 1;
            m = m + 2;
        };
    };
    if (text.find(weight) != string::npos)
    {
        int array[6];
        int a = 6;
        for (int i = 0; i < value[1]; i++)
        {
            array[i] = value[a];
            a = a + 3;
            cout << "weight" << value[a] << endl;
        }
        cout << "check 1";
        int m = 4;
        cout << endl;
        for (int i = 0; i < value[1]; i++)
        {
            int weightVal = array[i];
            cout << "check m:" << m << " ";
            TDA[value[m]][value[++m]] = weightVal;
            cout << "check m :" << m << " ";
            m = m + 2;
        };
        cout << endl;
    }
    if (text.find(weight) == string::npos && text.find(undirected) == string::npos)
    {
        int m = 4;
        for (int i = 0; i < value[1]; i++)
        {
            TDA[value[m]][value[++m]] = 1;
            m++;
        };
    }
    for (int i = 0; i < value[0]; i++)
    {
        int indegree = 0;
        for (int j = 0; j < value[0]; j++)
        {
            if (TDA[i][j] != 0)
            {
                indegree++;
            };
            cout << TDA[i][j] << " ";
        };
        cout << " indegree: " << indegree;
        cout << endl;
    };
    // OUTDEGREE
    for (int i = 0; i < value[0]; i++)
    {
        int outdegree = 0;
        for (int j = 0; j < value[0]; j++)
        {
            if (TDA[j][i] != 0)
            {
                outdegree++;
            };
        };
        cout << " outdegree of " << i << " coloumn: " << outdegree << " ";
    };

    for (int i = 0; i < value[0]; i++)
    {
        delete[] TDA[i];
    }
    delete[] TDA;
}
