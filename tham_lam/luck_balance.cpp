// cho N contest, moi contest co 2 chi so
// t: muc do quan trong (1 la quan trong, 0 la khong quan trong)
// l: chi so may man
// neu thua trong 1 contest thi se tang chi so may man cua contest do, con neu thang thi bi tru chi so may man
// Lisa duoc thua it hon  k contest
// tinh chi so may man lisa co duoc toi da

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, k;
    cin >> n >> k;
    vector<int> v;
    ll ans = 0;
    for(int i = 0; i< n; i++)
    {
        int l,t;
        cin >> l >> t;
        if(t==0) ans +=l;
        else v.push_back(l);
    }
    sort(v.begin(), v.end(), greater<int>());
    for(int i=0; i<v.size(); i++)
    {
        if(i<k) ans += v[i];        // cho thua toi da so luong k
        else ans -=v[i];
    }
    cout<< ans;

}
