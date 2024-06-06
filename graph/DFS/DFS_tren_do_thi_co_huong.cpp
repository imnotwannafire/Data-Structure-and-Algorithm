#include<bits/stdc++.h>
using namespace std;


void dfs(int u, vector<int> adj[], vector<bool>&used)
{
    cout<<u<<' ';
    used[u] = true;
    for(int x:adj[u])
    {
        if(!used[x])
        {
            dfs(x,adj, used);
        }
    }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m, st;
    cin >> n>> m>> st;
    vector<int> adj[n+1];
    vector<bool> used(n+1);
    for(int i=0; i<m; i++)
    {
        int x, y;
        cin>>x>>y;
        adj[x].push_back(y);
    }
    for(int i=1; i<=n; i++)
    {
        sort(adj[i].begin(), adj[i].end());
    }
    dfs(st, adj, used);
    return 0;
}
