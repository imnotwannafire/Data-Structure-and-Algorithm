#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m,s,t;
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
}
void BFS(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        for(int i:ke[x])
        {
            if(!visited[i])
            {
                q.push(i);
                visited[i]=true;
                parent[i] = x;
            }

        }
    }

}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    nhap();
    BFS(s);
    vector<int> res;
    if(!visited[t])
    {
        cout<<"-1";
    }
    else{
        while(t!=s)
        {
         res.push_back(t);
         t = parent[t];
        }
        res.push_back(s);
        reverse(res.begin(), res.end());
        for(int x:res)cout<<x<<" ";
    }


}
