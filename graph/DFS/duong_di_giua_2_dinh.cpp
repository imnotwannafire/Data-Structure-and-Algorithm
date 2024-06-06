//Ung dung mang parent de truy vet
#include<bits/stdc++.h>
using namespace std;

void dfs(int u, vector<int> adj[], vector<bool>& visited, vector<int>& parent)
{
    visited[u] = true;
    for(int i:adj[u])
    {
        if(!visited[i])
        {
            parent[i] = u;
            dfs(i, adj, visited, parent);
        }
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n,m, s,t;
    cin>>n>>m>>s>>t;
    vector<int> adj[n+1];
    vector<bool> visited(n+1);
    vector<int> parent(n+1);
    for(int i=0; i<m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);    //Do thi vo huong
    }
    for(int i=1; i<=n; i++)
    {
        sort(adj[i].begin(), adj[i].end());
    }

    dfs(s,adj,visited, parent);
    if(visited[t])
    {
        vector<int> path;
        while(t!=s)
        {
            path.push_back(t);
            t = parent[t];
        }
        path.push_back(t);
        reverse(path.begin(), path.end());
        for(int x:path) cout<< x<<' ';
    }
    else cout<<-1;
}
