#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, S;
    cin >> n >> S;
    vector<int> w(n+1);
    vector<int> v(n+1);
    for(int i=1; i<=n; i++)
    {
        cin>> w[i];
    }
    for(int i=1; i<=n; i++)
    {
        cin >> v[i];
    }
    vector<vector<int>> a(n+1, vector<int>(S+1));

    for(int i=1; i<=n; i++)
    {

        for(int j=1; j<=S; j++)
        {

            a[i][j]=a[i-1][j];

            if(w[i]<=j)
            {
                a[i][j] = max(a[i][j],a[i-1][j-w[i]]+v[i]);

            }
        }
    }
    cout<< a[n][S];
    return 0;
}
