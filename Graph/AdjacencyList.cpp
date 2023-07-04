#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Node and Edges Entry
    int n , m;
    cin >> n >> m;

    // Declaring (N + 1) arrays of type vector<int>
    vector <int> vi[n + 1];

    // Delaring (N + 1) size
    vector <pair<int , int>> vw[n + 1];

    for(int  i = 0; i < m; i++)
    {
        int u , v , w;
        cin >> u >> v >> w;

        // For undirected graph S.C = O(N + 2E)
        vi[u].push_back(v);
        vi[v].push_back(u);

        // For directed graph S.C = O(N + 2E)
        vi[u].push_back(v);

        //For weighted graphs S.C = O(N + 2E) + 2E
        vw[u].push_back({v , w});
    }
    for(int i = 0; i < n; i++)
    {
        cout << i << "->";
        for(auto x : vi[i])
            cout << x << " "; 
        cout << endl;
    }
    return 0;
}