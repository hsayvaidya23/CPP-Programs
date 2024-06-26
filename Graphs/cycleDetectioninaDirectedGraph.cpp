#include <bits/stdc++.h>
using namespace std;

bool iscycle(int src, vector<vector<int>> &adj, vector<bool> &visited, vector<bool> &stack) {
    if (!visited[src]) {
        visited[src] = true;
        stack[src] = true;
        for (auto i : adj[src]) {
            if (stack[i])
                return true;
            if (!visited[i] && iscycle(i, adj, visited, stack))
                return true;
        }
    }
    stack[src] = false;
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    bool cycle = false;
    vector<bool> stack(n, false);
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++) {
        if (!visited[i] && iscycle(i, adj, visited, stack)) {
            cycle = true;
            break;
        }
    }
    if (cycle)
        cout << "Cycle is present";
    else
        cout << "Cycle is not present";
    return 0;
}
