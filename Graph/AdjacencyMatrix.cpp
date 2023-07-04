#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Input for nodes and edges respectively
    int n , m;
    cin >> n >> m;

    // Declaring an adjacency matrix of (n+1) X (n+1)
    int adj[n + 1][n + 1];

    // Taking M no. of edges 
    for(int i = 0; i < m; i++)
    {
        // u and v are nodes
        int u , v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    for(int i = 0; i < n + 1; i++)
    {
        for(int j = 0; j < n + 1; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
