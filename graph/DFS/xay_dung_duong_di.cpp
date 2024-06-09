// bien tu x thanh phan lien thong thanh 1 thanh phan lien thong
// them so canh: so thanh phan lien thong - 1
// in ra con duong
#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
vector<int> adj[1005];
bool used[1005];
vector<int> daidien;
void dfs(int u)
{
    used[u] = true;
    for(int v:adj[u])
    {
        if(!used[v])
        {
            dfs(v);
        }

    }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m;
    cin >> n >> m;

    for(int i = 0; i< m; i++)
    {
        int x, y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i=1; i<=n; i++)
    {
        if(!used[i])
        {
            cnt++;
            daidien.push_back(i);
            dfs(i);
        }

    }
    cout<<cnt-1<<endl; // in ra so duong can phai them
    for(int j=0; j<daidien.size()-1; j++)
    {
        cout<<daidien[j]<<' '<<daidien[j+1]<<endl;
    }
    return 0;
}
