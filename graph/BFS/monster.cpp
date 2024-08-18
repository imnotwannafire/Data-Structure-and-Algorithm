#include<bits/stdc++.h>
using namespace std;
int n, m;
int di[4]={-1,0, 1, 0};
int dj[4]={0,1,0,-1};
string dir="URDL";
vector<pair<int, int>> monster;
vector<vector<int>> g;
pair<int, int> si, se;
vector<vector<int>> parent;
bool bfs_escape()
{
    queue<pair<pair<int, int>, int>> q;
    q.push(make_pair(si,0));
    while(!q.empty())
    {
        pair<pair<int, int>, int> cur=q.front();
        q.pop();
        int i = cur.first.first;
        int j = cur.first.second;
        int timer = cur.second;
        timer++;
        for(int k=0; k<4; k++)
        {
            int i1 = i+di[k];
            int j1 = j+ dj[k];
            if(i1<0 || i1 >=n || j1<0 || j1>=m || g[i1][j1]<=timer)continue;
            if((i1==0||j1==0||i1==n-1||j1==m-1))
            {
                parent[i1][j1]=k;
                se = {i1, j1};
                return true;
            }
            parent[i1][j1] = k;
            g[i1][j1] = timer;
            q.push({{i1, j1}, timer});

        }
    }
    return false;
}
int main()
{
    cin>>n>>m;
    g.resize(n);
    parent.resize(n);
    for(int i=0; i<n; i++)
    {
        g[i].resize(m);
        parent[i].resize(m);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            g[i][j]=INT_MAX;
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            char c; cin>>c;
            if(c=='#')
            {
                g[i][j]=0;
            }
            else if(c=='M')
            {
                g[i][j]=0;
                monster.push_back({i,j});
            }
            else if(c=='A')
            {
                g[i][j]=0;
                si = {i,j};
            }
            else{
                g[i][j]=INT_MAX;
            }
        }
    }
    if(si.first == 0 ||si.second==0|| si.first == n-1 || si.second == m-1)
    {
        cout<<"YES"<<endl;
        cout<<0;
        return 0;
    }
    queue<pair<pair<int, int>, int>> q;
    for(pair<int,int> m:monster)
    {
        q.push(make_pair(m,0));
    }
    while(!q.empty())
    {
        pair<pair<int, int>, int> cur = q.front();
        q.pop();
        int i = cur.first.first;
        int j = cur.first.second;
        int timer = cur.second;
        timer++;
        for(int k=0; k<4; k++)
        {
            int i1 = i+di[k];
            int j1 = j+dj[k];

            if(i1<0 || i1>n-1 || j1<0 || j1>m-1 || g[i1][j1]<=timer)
                continue;
            g[i1][j1]=timer;

            q.push({{i1, j1}, timer});
        }
    }

    if(!bfs_escape())
    {
        cout<<"NO";
        return 0;
    }
    cout<<"YES"<<endl;

    int ia = si.first;
    int ja = si.second;
    int ib = se.first;
    int jb = se.second;
    string ans="";
    while(ia!=ib || ja!=jb)
    {

            int k=parent[ib][jb];
            ans+=dir[k];
            ib -= di[k];
            jb -= dj[k];
    }
    reverse(ans.begin(), ans.end());
    cout<<ans.size()<<endl;
    cout<<ans;


}
