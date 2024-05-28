#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,m;
vector<int> ke[1001];
bool visited[1001];
void nhap()
{
    cin>>n>>m;
    for(int i= 0; i<m; i++)
    {
        int x,y; cin>> x>> y;
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
        cout<<x<<" ";
        for(int y:ke[x])
        {
            if(!visited[y])
            {
                q.push(y);
                visited[y] = true;
            }

        }
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    nhap();
    BFS(1);
    return 0;

}
