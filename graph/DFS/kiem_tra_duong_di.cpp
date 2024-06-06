// Muon biet hai dinh co duong di den nhau hay khong thi kiem tra co
// thuoc 1 thanh phan lien thong hay khong
// Danh dau thanh phan lien thong cho tung dinh
#include<bits/stdc++.h>
using namespace std;


void dfs(int u, int cnt, vector<int> adj[], vector<bool>&used, vector<int>& tplt)
{
    used[u]= true;
    tplt[u]= cnt;
    for(int v:adj[u])
    {
        if(!used[v])
        {
            dfs(v,cnt,adj, used, tplt);
        }
    }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    vector<bool> visited(n+1);
    vector<int> tplt(n+1);
    int cnt = 0;
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
    for(int i=1; i<=n; i++)
    {
        if(!visited[i])
        {
            cnt++;
            dfs(i, cnt,adj,visited,tplt);
        }
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x,y;
        cin>>x>>y;
        if(tplt[x]==tplt[y]) cout<<1<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
