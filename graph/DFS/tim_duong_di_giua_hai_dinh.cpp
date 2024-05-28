// tim duong di tu dinh s den dinh t
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m, s,t;
vector<int> ke[1001];
bool visited[1001];
int parent[1001]; //parent[u]: dinh cha cua cua dinh u
void nhap()
{
    cin >> n >> m>>s>>t;
    for(int i = 0; i< m; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    for(int i = 1; i <=n; i++)
    {
        sort(ke[i].begin(), ke[i].end());
    }
}

void DFS(int u)
{

   visited[u] = true;
   for(int v: ke[u])
   {
       if(!visited[v])
       {
           //cout<<v<< " ";

           DFS(v);
            parent[v] = u;
       }
   }

}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    nhap();
    DFS(s);
    if(!visited[t]){
        cout<<"-1"<<endl;
    }
    else{//truy vet duong di
        vector<int> res; // vector ket qua
        while(t!=s)
        {
            res.push_back(t);
            t =parent[t];
        }
        res.push_back(s);
        reverse(res.begin(), res.end());
        for(int x:res)cout<<x<<' ';
    }
}
