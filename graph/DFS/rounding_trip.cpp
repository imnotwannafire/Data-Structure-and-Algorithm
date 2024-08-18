#include<bits/stdc++.h>
using namespace std;

int n,m;
int s, t;
vector<int> adj[100005];
vector<int> used(100005,0);
vector<int> parent(100005,0);
bool dfs(int u, int par)
{
    used[u]=1;
    for(int v:adj[u])
    {
        if(v==par) continue;
        if(used[v])
        {
            t=u;
            s=v;
            return 1;
        }
        parent[v]=u;
        if(dfs(v,u)) return 1;
    }
    return 0;
}
int main()
{
    cin>>n >> m;

    s=-1;

    for(int i=0; i<m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=1; i<=n; i++)
    {
        if(used[i]==0 && dfs(i, parent[i]))
            break;
    }
    if(s!=-1)
    {
        vector<int> ans;
        ans.push_back(s);
        for(int u = t; u!=s; u=parent[u])
        {
            ans.push_back(u);
        }
        ans.push_back(s);
        cout<<ans.size()<<endl;
        for(int x:ans)cout<<x<<' ';
    }
    else{
        cout<<"IMPOSSIBLE";
    }
    return 0;


}
