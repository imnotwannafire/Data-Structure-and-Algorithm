// tim duong di tu dinh s den dinh t
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m;
vector<int> ke[1001];
bool visited[1001];
int parent[1001]; //parent[u]: dinh cha cua cua dinh u
void nhap()
{
    cin >> n >> m;
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

bool DFS(int u)
{

   visited[u] = true;
   for(int v: ke[u])
   {
       if(!visited[v])
       {
           parent[v] = u;
           if (DFS(v)) return true;

       }
       else if(v!= parent[u])// phat hien canh nguoc
           return true;
       }
   }
   return false;

}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    nhap();
    if(DFS(1)) cout<<"TRUE";
    else cout<<"FALSE";


}
