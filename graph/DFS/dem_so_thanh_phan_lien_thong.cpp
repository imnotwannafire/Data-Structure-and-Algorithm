#include<bits/stdc++.h>

using namespace std;
using ll = long long;

vector<int> ds_ke[1001];
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
    int cnt=0;
    for(int i=1; i<=n;i++)
    {
        if(!visited[i])
        {
            DFS(i);
            cnt++;
        }
    }
    cout<<endl;
    cout<<cnt;
    return 0;
}
