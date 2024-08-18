#include<bits/stdc++.h>
using namespace std;
int n, m, ia, ja, ib, jb;
int di[4]={-1,0, 1, 0};
int dj[4]={0,1,0,-1};
string dir="URDL";
int main()
{
    cin >> n>>m;
    vector<vector<char>> grid(n,vector<char> (m,' '));
    vector<vector<int>> used(n, vector<int>(m,0));
    vector<vector<int>> parent(n, vector<int> (m, 0));

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>grid[i][j];
            if(grid[i][j]=='A')
            {
                ia=i;
                ja=j;
            }
            if(grid[i][j]=='B')
            {
                ib = i;
                jb = j;
            }
        }
    }
    queue<pair<int, int>> q;
    q.push({ia, ja});
    used[ia][ja]=0;
    while(!q.empty())
    {
        pair<int, int> cur = q.front();
        int u=cur.first;
        int v=cur.second;
        q.pop();
        for(int k=0; k<4; k++)
        {
            int i1=u+di[k];
            int j1=v+dj[k];
            if(i1>=0 && i1<n && j1>=0 && j1<m && used[i1][j1]==0 && grid[i1][j1]!='#')
            {
                used[i1][j1]= used[u][v]+1;
                parent[i1][j1] = k;
                q.push({i1, j1});
            }
        }
    }
    if(used[ib][jb]!=0)
    {
        cout<<"YES"<<endl;
        string ans;
        while(ib!=ia || jb!=ja)
        {
            int i = parent[ib][jb];
            ans+=dir[i];
            ib -= di[i];
            jb -= dj[i];
        }
        reverse(ans.begin(), ans.end());
        cout<<ans.size()<<endl;
        cout<<ans;
    }
    else{
        cout<<"NO";
    }
    return 0;
}
