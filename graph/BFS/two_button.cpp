#include<bits/stdc++.h>
#define int long long

using namespace std;

int32_t main()
{
    int n, m;
    vector<int> adj[20004];
    vector<int> used(20004,0);
    cin >> n >> m;
    for(int i=1;i<10000; i++)
    {
        adj[i].push_back(i-1);
        adj[i].push_back(i*2);
    }
    queue<int> q;
    q.push(n);
    used[n]=1;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(auto v:adj[u])
        {
            if(used[v]==0)
            {
                used[v] = used[u]+1;
                q.push(v);
            }
        }
    }
    cout<<used[m]-1;
    return 0;

}
