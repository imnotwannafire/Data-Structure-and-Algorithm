#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int ans;
    cin>>n;
    vector<vector<int>> a(n, vector<int>(n, 0));
    vector<vector<int>> b(n, vector<int>(n, 0));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    b[0][0]=a[0][0];
    for(int j=1; j<n; j++)
    {
        b[0][j]= (b[0][j-1]<<1)|a[0][j];
    }
    for(int i=1; i<n; i++)
    {
        b[i][0] = (b[i-1][0]<<1)|a[i][0];
    }
    for(int i=1; i<n; i++)
    {
        for(int j=1; j<n; j++)
        {
            int up = (b[i-1][j]<<1)|a[i][j];
            int left = (b[i][j-1]<<1)|a[i][j];
            b[i][j]= max(up, left);
        }
    }
    ans = b[n-1][n-1];
    cout<<ans;

    return 0;
}
