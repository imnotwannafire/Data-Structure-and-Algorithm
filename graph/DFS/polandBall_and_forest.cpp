#include<bits/stdc++.h>
using namespace std;

vector<int> v;
vector<int> used;
vector<int> adj[10005];
void dfs(int u)
{
    used[u]++;
    for(int v:adj[u])
    {
        if(used[v]==0)
        {
            dfs(v);
        }
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int a;
        cin >> a;
        adj[i].push_back(a);
        adj[a].push_back(i);
    }
    used.resize(n+1,0);
    int ans=0;
    for(int i=1; i<=n; i++)
    {
        if(used[i]==0)
        {
            ans++;
            dfs(i);
        }
    }

    cout<<ans;
    return 0;
}
