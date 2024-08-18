#include<bits/stdc++.h>
using namespace std;

int n, m;

vector<vector<int>> used(101, vector<int> (101, 1000));
vector<pair<int, int>> adj[101];
void dfs(int u, int c, int cnt)
{
    used[c][u]=cnt;
    for(auto v:adj[u])
    {
        int color = v.second;
        int i = v.first;
        if(color==c && used[c][i]==1000)
        {
            dfs(i, c, cnt);
        }
    }
}
int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n>>m;
    vector<int> colors(101,0);
    for(int i=0; i<m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        colors[c]++;
        adj[a].push_back({b,c});
        adj[b].push_back({a,c});
    }
    for(int color=1; color<=100; color++)
    {
        if(colors[color]>0)
        {
            int cnt = 0;
            for(int i=1; i<=100; i++)
            {
                if(used[color][i]==1000)
                {
                    cnt++; // dem so vung lien thong
                    dfs(i, color, cnt);
                }
            }
//            cout<<"color: "<<color<<' '<<"cnt: "<<cnt<<endl;
        }
    }
    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        int u, v;
        cin>>u>>v;
        int res = 0;
        for(int color=1; color<=100; color++)
        {
            if(colors[color]>0)
            {
                if(used[color][u]!=1000 && used[color][v]!= 1000 && used[color][u]==used[color][v])
                {
                    res++;
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
