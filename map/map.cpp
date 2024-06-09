#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    freopen("input.txt","r", stdin);
    freopen("output.txt","w",stdout);
    map<int, int> mp;
    int n;
    cin>>n;
    for(int i =0; i<n; i++)
    {
        int x,y; cin >> x>>y;
        //mp[x] = y;
        mp.insert({x,y});
    }
    for(auto x:mp)
    {
        cout<<x.first<<' '<<x.second<<endl;
    }

    return 0;
}
