// cho ban do 1 toa nha va nhiem vu cua ban la dem so phong toa nha do
// co the di chuyen trai phai, len, xuong cac o san
// ky tu '.' la san, # la tuong
// DFS tren luoi
#include<bits/stdc++.h>
using namespace std;

int n, m;
char a[1005][1005];

int dx[]= {-1, 0, 0, 1};
int dy[]= {0, -1, 1, 0};

void dfs(int i, int j)
{
    a[i][j] = '#';
    for(int k=0; k<4; k++)
    {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1>=1&&i1<=n&&j1>=1&&j1<=m&&a[i1][j1]=='.')
        {
            dfs(i1, j1);
        }
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n >> m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(a[i][j]=='.')
            {
                cnt++;
                dfs(i, j);
            }
        }
    }
    cout<<cnt<<endl;
}
