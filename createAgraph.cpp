#include <iostream>
#include <vector>
using namespace std;

void DFS(int node, vector<int> adj[], vector<bool> &visited)
{
    visited[node] = true;
    cout << node + 1 << " ";

    for (int neighbor : adj[node])
    {
        if (!visited[neighbor])
        {
            DFS(neighbor, adj, visited);
        }
    }
}

int main()
{
    int vertices, edges;

    cout << "Enter the number of vertices: ";
    cin >> vertices;
    cout << "Enter the number of edges: ";
    cin >> edges;

    vector<int> adj[100];

    cout << "Enter the edges (u v) where 1 <= u,v <= " << vertices << ":\n";
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u - 1].push_back(v - 1);
        adj[v - 1].push_back(u - 1);
    }

    int startVertex;
    cout << "Enter the starting vertex for DFS: ";
    cin >> startVertex;

    vector<bool> visited(vertices, false);

    cout << "DFS Traversal starting from vertex " << startVertex << ": ";
    DFS(startVertex - 1, adj, visited);
    cout << "\n";

    return 0;
}
