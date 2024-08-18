#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n>>m;
    vector<int> adj[n+1];
    vector<int> used(n+1, 0);
    vector<int> parent(n+1, 0);
    for(int i=0; i<m; i++)
    {
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    queue<int> q;
    q.push(1);
    used[1]=1;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int v:adj[u])
        {
            if(used[v]==0)
            {
                q.push(v);
                parent[v]=u;
                used[v]=used[u]+1;
            }
        }
    }
    if(used[n]!=0)
    {
        cout<<used[n]<<endl;
        vector<int> path;

        while(n!=0)
        {
            path.push_back(n);
            n = parent[n];
        }
        reverse(path.begin(), path.end());
        for(int x:path) cout<<x<<' ';
    }
    else
        cout<<"IMPOSSIBLE";
}
