#include<bits/stdc++.h>
using namespace std;

int di[4]={-1, 0, 1, 0};
int dj[4]={0, 1, 0, -1};
#define int long long
void bfs_e(vector<string>&grid, vector<int>&dist_e, int startx, int starty)
{
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>>used(n,vector<int>(m,0));
    queue<pair<int, int>> q;
    q.push({startx, starty});
    used[startx][starty]=1;
    while(!q.empty())
    {
        pair<int, int> cur=q.front();
        q.pop();
        int i = cur.first;
        int j = cur.second;
        if(grid[i][j]>='0' && grid[i][j]<='9')
        {
            // update value
            int rune = grid[i][j]-'0';
            dist_e[rune]=used[i][j]-1;
        }
        for(int k=0; k<4; k++)
        {
            int i1 = i+di[k];
            int j1 = j+dj[k];
            if(i1>=0 && i1 <n && j1>=0 && j1<m && grid[i1][j1]!='x' && used[i1][j1]==0)
            {
                used[i1][j1]=used[i][j]+1;
                q.push({i1, j1});
            }
        }
    }
}

void bfs_r(vector<string>&grid, vector<vector<int>>&dist_r, int rune1,  int startx, int starty)
{

    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>>used(n,vector<int>(m,0));
    queue<pair<int, int>> q;
    q.push({startx, starty});
    used[startx][starty]=1;
    while(!q.empty())
    {
        pair<int, int> cur=q.front();
        q.pop();
        int i = cur.first;
        int j = cur.second;
        if(grid[i][j]>='0' && grid[i][j]<='9')
        {

            int rune2 = grid[i][j]-'0';
            dist_r[rune1][rune2]=used[i][j]-1;

        }
        for(int k=0; k<4; k++)
        {
            int i1 = i+di[k];
            int j1 = j+dj[k];
            if(i1>=0 && i1 <n && j1>=0 && j1<m && grid[i1][j1]!='x' && used[i1][j1]==0)
            {
                used[i1][j1]=used[i][j]+1;
                q.push({i1, j1});
            }
        }
    }
}
int32_t main()
{
    int runes;
    cin >> runes;
    int n, m;
    cin>>n>>m;
    vector<string> grid(n);
    for(int i=0; i<n; i++)
    {
        cin >> grid[i];
    }
    // for(string s: grid)
    // {
    //     cout<<s<<endl;
    // }
    vector<int> dist_e(runes,0); // shortest distance from entrance to each rune
    vector<vector<int>> dist_r(runes, vector<int>(runes,0)); //shortest distance between each rune
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(grid[i][j]=='e')
            {
                bfs_e(grid, dist_e, i, j);
            }
            else if(grid[i][j]>='0'&& grid[i][j]<='9')
            {
                int rune = grid[i][j]-'0';
                bfs_r(grid, dist_r,rune, i, j);
            }
        }
    }
    // for(int i:dist_e)
    // {
    //     cout<<i << ' ';
    // }
    // cout<<endl;
    // for(vector<int> a:dist_r)
    // {
    //     for(int i:a)cout<<i<<' ';
    //     cout<<endl;
    // }
    vector<int> order(runes);
    iota(order.begin(),order.end(),0);

    int ans = INT_MAX;
    do{
        int total = 0;
        for(int i=0; i<order.size()-1;i++)
        {
            int rune1=order[i];
            int rune2=order[i+1];
            total += dist_r[rune1][rune2];
        }
        total+= dist_e[order[0]]+dist_e[order.back()];
        ans = min(total, ans);
    }while(next_permutation(order.begin(), order.end()));
    cout<<ans;
    return 0;


}
