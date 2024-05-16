// Trong mang co n so nguyen, bao gom ca so nguyen duong va am
// Cho X (co the am hoac duong)
// Dem so mang con co tong la X
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{

    int n,x;
    cin >> n >> x;
    vector<int> a(n);
    for(int &x1:a) cin>>x1;
    map<ll, int> mp;
    ll ans = 0;
    ll tong = 0;
    for(int i=0; i<n; i++)
    {
        tong +=a[i];
        if(tong == x) ++ans;
        if(mp.count(tong - x)) ans += mp[tong-x];
        mp[tong]++;

    }
    cout<< ans<<endl;
    return 0;
}
