#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> adj[100005];
vector<int> team(100005, 0);
bool imposible = false;
void dfs(int u)
{
    for(int v:adj[u])
    {
        if(team[v]!=0)
        {
            if(team[v]==team[u])
            {
                imposible = true;
                return;
            }

        }
        else
        {
            team[v] = 3-team[u];
            dfs(v);
        }

    }
}
int main()
{
    cin >> n >> m;

    for(int i=0; i<m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=1; i<=n; i++)
    {
        if(team[i]==0&&!imposible)
        {
            team[i]=1;
            dfs(i);
        }
    }
    if(!imposible)
    {
       for(int i=1; i<=n; i++)
        {
            cout<<team[i]<<' ';
        }
    }
    else
    {
        cout<<"IMPOSSIBLE";
    }

    return 0;

}
