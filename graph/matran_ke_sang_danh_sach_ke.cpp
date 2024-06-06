// Ma tran ke sang danh sach ke
#include<bits/stdc++.h>
using namespace std;

void solve(int n, vector<vector<int>> v)
{

    for(int i=0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(v[i][j]==1) cout<<j+1<<' ';
        }
        cout<<endl;
    }

}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin>> n;
    vector<vector<int>> v(n, vector<int>(n));
    for(int i=0; i<n; i++)
    {
        for(auto &x:v[i])
            cin>>x;
    }
    solve(n,v);
}
