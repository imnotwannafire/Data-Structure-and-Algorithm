#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m, dem =0;
vector<int> ke[1001];
bool visited[1001];
int ID[1001];
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
        ID[x] = dem;
        for(int i:ke[x])
        {
            if(!visited[i])
            {
                q.push(i);
                visited[i]=true;
            }

        }
    }

}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    nhap();
    for(int i = 1; i<=n; i++)
    {
        if(!visited[i]){
            dem++;
            BFS(i);

        }
    }
    int q;
    cin >> q;
    while(q--)
    {
        int x, y;
        cin >>x >> y;


        if(ID[x]==ID[y])
        {
            cout<<"1"<<endl;
        }
        else cout<<"-1"<<endl;
    }
}
