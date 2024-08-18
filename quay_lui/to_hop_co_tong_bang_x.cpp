#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,s, x[100], a[100];
vector<vector<int>> v;
void Try(int i, int from, int sum)
{
    for(int j=from; j<=n; j++)
    {
        if(sum+a[j]<=s)
        {
            x[i]=a[j];
            sum+=a[j];
            if(sum==s)
            {
                vector<int> tmp(x+1, x+i+1);
                v.push_back(tmp);
            }
            else
            {
                Try(i+1,j, sum);
            }
            sum -=a[j];
        }
    }

}
int32_t main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n>>s;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a+1, a+1+n);
    Try(1,1,0);
    for(auto it:v)
    {
        cout<<"{";
        for(int i=0;i<it.size(); i++)
        {
            cout<<it[i];
            if(i<it.size()-1) cout<< ' ';
        }
        cout<<"}\n";
    }
    return 0;
}
