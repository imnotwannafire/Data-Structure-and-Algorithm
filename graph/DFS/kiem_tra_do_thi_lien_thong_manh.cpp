// lien thong manh la tu 1 dinh se di dc  den cac dinh con lai trong do thi
// kiem tra: chi can 1 dinh khong di duoc den cac dinh con lai thi ko lien thong manh
#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[1005];
bool used[1005];
int cnt = 0;
void dfs(int u)
{
    cnt++;
    used[u]=true;
    for(int v:adj[u])
    {
        if(!used[v])
        {
            dfs(v);
        }
    }
}
int check()
{
    for(int i =1; i<=n ;i++ )
    {
        cnt=0;
        memset(used,false, sizeof(used));
        dfs(i);
        if(cnt!=n) return 0;
    }
    return 1;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n >> m;
    for(int i=0; i<m; i++)
    {
        int x, y;
        cin>>x>>y;
        adj[x].push_back(y);
    }
    if(check()) cout<< "YES";
    else cout<<"NO";
}
