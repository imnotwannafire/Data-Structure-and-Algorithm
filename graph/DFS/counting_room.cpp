#include<bits/stdc++.h>

using namespace std;
vector<vector<char>> grid(1005, vector<char> (1005, 0));
vector<vector<int>> used(1005, vector<int>(1005, 0));
int di[4]={-1, 0, 1, 0};
int dj[4]={0, 1, 0, -1};
int n, m;
void dfs(int i, int j)
{
    used[i][j]=1;
    for(int k=0; k<4; k++)
    {
        int i1 = i+di[k];
        int j1 = j+dj[k];
        if(i1<0 || i1 >= n || j1<0 || j1>=m || grid[i1][j1]=='#'||used[i1][j1]!=0)continue;
        dfs(i1, j1);
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<m; j++)
        {
            char c;
            cin >> c;
            grid[i][j]=c;
        }
    }
    int ans = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(grid[i][j]=='.' && used[i][j]==0)
            {
                dfs(i, j);
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}
