#include<bits/stdc++.h>
#define int long long
#define INF 0x3f3f3f3f3f3f3f3f
using namespace std;


int32_t main()
{
//    freopen("test_input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;

    cin>>n>>m;
    vector<pair<int,int>> adj[n+1];
    for(int i=0; i<m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v,w});
    }
    vector<int> dist(n+1,INF);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    dist[1] = 0;
    pq.push({dist[1],1});
    while(!pq.empty())
    {
        pair<int, int> cur = pq.top();
        pq.pop();
        int u = cur.second;
        int d = cur.first;
        if(d>dist[u]) continue;
        for(auto neighbor:adj[u])
        {
            int v = neighbor.first;
            int w = neighbor.second;
            if(dist[v]> dist[u]+w)
            {
                dist[v] = dist[u]+w;
                pq.push({dist[v],v});
            }
        }
    }
    for(int i=1; i<=n; i++)
    {
        cout<<dist[i]<<' '<<endl;
    }
    return 0;

}
