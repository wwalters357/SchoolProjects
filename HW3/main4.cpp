

#include <iostream>

using namespace std;

const int V = 7;

int matrix[V][V] = {{0, 10, 2, 0, 0, 0, 1},
                    {10, 0, 2, 8, 2, 0, 0},
                    {2, 2, 0, 8, 0 ,1 ,0},
                    {0, 8, 8, 0, 3, 1, 2},
                    {0, 2, 0, 3, 0, 0, 4},
                    {0, 0, 1, 1, 0, 0, 1},
                    {1, 0, 0, 2, 4, 1, 0}
};

int minDist(int dist[], bool intree[])
{
    // Initialize min value
    int min = INT8_MAX, min_index;

    for (int v = 0; v < V; v++)
        if (intree[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;

    return min_index;
}

void solution(int parent[], int src, int dest, int dist[])
{
    printf("\n\nPath\n");
    string path = to_string(dest + 1);
    int i = dest;
    while(i != src && i >= 0) {
        path = to_string(parent[i]+1) + " -> " + path;
        matrix[i][parent[i]] = 0; //Removing edge
        matrix[parent[i]][i] = 0; // Removing edge
        i = parent[i];
    }
    cout << path;
    printf("\nShortest distance: %d", dist[dest]);
}

void dijkstra(int (&matrix)[V][V], int src, int dest)
{
    int dist[V];    // ith index will hold shortest distance from node 1 to i

    bool intree[V]; // ith index = TRUE if vertex i is present in shortest path

    int parent[V];  // will eventually contain the path

    for (int i = 0; i < V; i++){
        dist[i] = INT8_MAX;
        intree[i] = false;
    }
    dist[src] = 0;

    // Shortest path
    for (int count = 0; count < V-1; count++)
    {
        // Select min distance vertex from remaing vertices and process
        int u = minDist(dist, intree);
        intree[u] = true;

        // Update distance values
        for(int v = 0; v < V; v++) {
            if (!intree[v] && matrix[u][v] && dist[u] != INT8_MAX && dist[u]+matrix[u][v] < dist[v]){
                dist[v] = dist[u] + matrix[u][v];
                parent[v] = u;
            }
        }
    }
    // print solution and total distance
    solution(parent, src, dest, dist);
}

int main(){
    dijkstra(matrix, 0, 3);
    dijkstra(matrix, 0, 3);
    dijkstra(matrix, 0, 3);
    return 0;
}
