#include<bits/stdc++.h>
using namespace std;

int n;
int d;
int di[2]={0,1};
int dj[2]={-1, 0};
void dfs(int i, int j, int x, vector<vector<int>>&a)
{
    if(d>x) return;
    a[i][j]=x;
//    cout<<i << ' '<<j << ' '<<x<<endl;
    for(int k=0; k<2; k++)
    {
        int i1 = i+di[k];
        int j1 = j+dj[k];
        if(i1<=n&&j1>=1&&a[i1][j1]==0)
        {
            d++;
            dfs(i1, j1, x, a);
        }
    }
//    if(j-1>0 && a[i][j-1]==0)
//    {
//        d++;
//        dfs(i, j-1, x, a);
//    }
//    if(i+1<=n && a[i+1][j]==0)
//    {
//        d++;
//        dfs(i+1, j, x, a);
//    }
}
int main()
{
    cin>>n;
    vector<vector<int>> a(n+1, vector<int>(n+1,0));
    for(int i=1; i<=n; i++)
    {
        // Input the number in diag (i, i)
        int x;
        cin >> x;
        d = 1;
        dfs(i, i, x, a);
    }
    for(int i = 1;i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<a[i][j]<<' ';

        }
        cout<<endl;
    }
    return 0;
}
