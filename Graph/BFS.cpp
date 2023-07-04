#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , m;
    cin >> n >> m;

    vector <int> adj[n + 1];

    int u , v;
    for(int i = 0; i < m; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    vector<int> bfs; // To store traversal nodes
    vector<int> vi(v + 1); // Visited Array
    for(int i = 0; i <= v; i++)
    {
        if(!vi[i]) 
        {
            queue<int> q; // Declare a queue
            q.push(i); // Insert the pointing element to the start of queue i.e q.push(index)
            vi[i] = 1; // Change the value of pointing number from 0 to 1 in visited array
            while(!q.empty()) // Iterate till the queue did not become empty 
            {
                int node = q.front(); // Take the first element from the queue and store in node
                q.pop(); // Also remove that element from the queue using pop() function (removing the first element)
                bfs.push_back(node); // Push that popped element into bfs vector

                // To ensure that all the adjacent nodes are inserted, we run a loop 
                for(auto it : adj[node])  
                {
                    if(!vi[it]) //  Check if any node remain unvisited
                    {
                        q.push(it); // Take that node and push it in queue
                        vi[it] = 1; // In the meantime, mark that unvisited element visited by changing its value from 0 to 1
                    }
                }
            }
        }
    }
    for(auto x : bfs)
        cout << x << endl;
}