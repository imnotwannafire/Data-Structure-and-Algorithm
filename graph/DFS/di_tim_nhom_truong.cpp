// tim dinh co nhieu canh noi voi cac dinh khac nhat trong 1 nhom lien thong
// neu 2 dinh co so canh bang nhau thi chon so nho hon
// luu cac phan tu thuoc 1 thanh phan lien thong vao 1 vector

#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[1005];
bool used[1005];
int bac[1005];
int nhomTruong;
void dfs(int u)
{
    if(bac[u]>bac[nhomTruong]||(bac[u]==bac[nhomTruong]&&u<nhomTruong))
    {
        nhomTruong = u;
    }
    used[u]=true;
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
    cin>>n>>m;
    for(int i = 0; i<m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        // dem bac
        bac[x]++;
        bac[y]++;

    }
    vector<int> v;
    for(int i=1; i<=n; i++)
    {
        if(!used[i])
        {
            nhomTruong=i;
            dfs(i);
            v.push_back(nhomTruong);
        }
    }
    sort(v.begin(), v.end());
    for(int x: v)cout<<x<<' ';
}
