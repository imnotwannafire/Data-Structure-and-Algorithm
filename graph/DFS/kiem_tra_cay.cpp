// Mot do thi N dinh la mot cay neu co dung N-1 canh
// Va giua hai dinh bat ky chi ton tai 1 duong di duy nhat giua chung
// Cho do thi co N dinh, M canh, kiem tra do thi da cho co phai 1 cay hay khong
// Khong co chu trinh,
// giua 2 dinh bat ky co 1 duong di duy nhat
// Lien thong (dk 2)
// N-1 canh (dk 1)

#include<bits/stdc++.h>
using namespace std;

int n, m;
bool used[1005];
vector<int> adj[1005];
int cnt = 0;

void dfs1(int u)
{
    used[u] = true;

    cnt ++;
    for(int v:adj[u])
    {
        if(!used[v])
        {
            dfs1(v);
        }
    }
}
int ok = 0;
int parent[1005];
void dfs2(int u)
{
    if(ok) return;
    used[u] = true;
    for(int v:adj[u])
    {
        if(!used[v]){
            parent[v] = u;
            dfs2(v);
        }
        else if(used[v] && v!=parent[u])
        {
            ok = 1;
            return;
        }
    }
}
int check()
{
    dfs1(1);
    // check dieu kien lien thong va n-1 canh
    if(cnt==n && m == n-1) return 1;
    else return 0;
}

int check2()
{
    // check dieu kien n - 1 dinh va khong co chu trinh
    dfs2(1);
    if(m==n-1&&!ok) return 1;
    else return 0;

}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n >> m;
    for(int i =0; i<m; i++)
    {
        int x, y;
        cin >> x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    cout<<check2();
    return 0;

}
