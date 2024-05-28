#include<bits/stdc++.h>

using namespace std;
using ll = long long;

vector<int> ds_ke[1001];
int matran_ke[1001][1001];
vector<pair<int, int>> ds_canh;
bool visited[1001];
int n, m;

void DFS(int u)
{
   cout<<u<<" ";
   visited[u] = true;
   for(int v:ds_ke[u])
   {
       if(!visited[v])
       {
           DFS(v);
       }
   }

}
void DFS2(int u)
{
    cout<<u<<" ";
    visited[u]=true;
    for(int i = 1; i<=n; i++)
    {
        if(matran_ke[u][i]==1)
        {
            if(!visited[i])
            {
                DFS2(i);
            }
        }
    }
}

void DFS3(int u)
{
    cout<<u<<" ";
    visited[u] = true;
    //duye danh sach ke cua dinh u
    for(auto it: ds_canh)
    {
        if(!visited[it.second])
        {
            DFS3(it.second);
        }
        if(it.second == u)
        {
            if(!visited[it.first])
                DFS3(it.first);
        }
    }

}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin>> n>> m;
    for(int i = 0; i<m; i++)
    {
        int x, y;
        cin >> x >> y;
        ds_ke[x].push_back(y);
        ds_ke[y].push_back(x);
    }
    DFS(1);
    return 0;
}
