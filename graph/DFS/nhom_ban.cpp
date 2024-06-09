// tim thanh phan lien thong co nhieu dinh nhat
#include<bits/stdc++.h>
using namespace std;

void dfs(int u, vector<int> adj[], vector<bool>&used, int &cnt)
{
    used[u]=true;
    cnt++;
    for(int v:adj[u])
    {
        if(!used[v])
        {

            dfs(v, adj, used, cnt);
        }
    }

}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m;
    cin >>n>>m;
    vector<int> adj[n+1];
    vector<bool> used(n+1);
    int max_ele=0;
    for(int i=0; i<m; i++)
    {
        int x, y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i=1; i<=n;i++)
    {
        if(!used[i])
        {
            int cnt=0;
            dfs(i,adj,used, cnt);
            max_ele=max(max_ele, cnt);
        }
    }
    cout<<max_ele;
}
