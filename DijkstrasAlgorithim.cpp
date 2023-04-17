using namespace std;
#include <iostream>

// int miniDist(int distance[], bool Tset[]) // finding minimum distance
// {
//     int minimum = INT_MAX, ind;

//     for (int k = 0; k < 7; k++)
//     {
//         if (Tset[k] == false && distance[k] <= minimum)
//         {
//             minimum = distance[k];
//             ind = k;
//         }
//     }
//     return ind;
// }

// void DijkstraAlgo(int graph[7][7], int src) // adjacency matrix
// {
//     int distance[7]; // // array to calculate the minimum distance for each node
//     bool Tset[7];    // boolean array to mark visited and unvisited for each node

//     for (int k = 0; k < 7; k++)
//     {
//         distance[k] = INT_MAX;
//         Tset[k] = false;
//     }

//     distance[src] = 0; // Source vertex distance is set 0

//     for (int k = 0; k < 7; k++)
//     {
//         int m = miniDist(distance, Tset);
//         Tset[m] = true;
//         for (int k = 0; k < 7; k++)
//         {
//             // updating the distance of neighbouring vertex
//             // to check if node is unvisited | to check if there is a weight(connection b/w the two vertices | to check if the current index is not infinite| to check if the curent distance is greater than or smaller than the new distacne )
//             if (!Tset[k] && graph[m][k] && distance[m] != INT_MAX && distance[m] + graph[m][k] < distance[k])
//                 distance[k] = distance[m] + graph[m][k];
//         }
//     }
//     cout << "Vertex\t\tDistance from source vertex" << endl;
//     for (int k = 0; k < 7; k++)
//     {

//         cout << "V" << k + 1 << "\t\t\t" << distance[k] << endl;
//     }
// }

int mindist(int distance[], bool visited[])
{
    int minimum = INT_MAX, ind;
    for (int i = 0; i < 7; i++)
    {
        if (visited[i] == false && distance[i] <= minimum)
        {
            minimum = distance[i];
            ind = i;
        }
    }
    return ind;
};

void DijkstrasAlgorithim(int graph[7][7], int src)
{
    int distance[7];
    bool visited[7];

    for (int i = 0; i < 7; i++)
    {
        distance[i] = INT_MAX;
        visited[i] = false;
    }
    distance[src] = 0;

    for (int i = 0; i < 7; i++)
    {
        int min = mindist(distance, visited);
        visited[min] = true;
        for (int j = 0; j < 7; j++)
        {
            if (!visited[j] && graph[min][j] && distance[min] + graph[min][j] < distance[j])
            {
                distance[j] = distance[min] + graph[min][j];
            }
        }
    }
    cout << "Vertex\t\tDistance from source vertex" << endl;
    for (int k = 0; k < 7; k++)
    {
        cout << "V" << k + 1 << "\t\t\t" << distance[k] << endl;
    }
}

int main()
{
    int graph[7][7] = {
        {0, 2, 0, 1, 0, 0, 0},
        {0, 0, 0, 3, 10, 0, 0},
        {4, 0, 0, 0, 0, 5, 0},
        {0, 0, 2, 0, 2, 8, 4},
        {0, 0, 0, 0, 0, 0, 6},
        {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 1}};
    DijkstrasAlgorithim(graph, 0);
    return 0;
}
