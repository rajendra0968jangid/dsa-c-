#include <iostream>
using namespace std;

#define V 4 // Number of vertices

void displayMatrix(int graph[V][V])
{
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int graph[V][V] = {// Adjacency matrix
                       {0, 1, 1, 0},
                       {1, 0, 0, 1},
                       {1, 0, 0, 1},
                       {0, 1, 1, 0}};

    cout << "Adjacency Matrix:" << endl;
    displayMatrix(graph);
    return 0;
}

/////////////////////////////////////////////////////////

