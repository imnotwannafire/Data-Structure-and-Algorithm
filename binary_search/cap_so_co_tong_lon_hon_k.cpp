// Tim cap so co tong lon hon k trong mang
#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int a[n];
    for(int i = 0; i<n ;i++)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    ll ans = 0;
    for(int i =0; i< n;i++)
    {
        //a[i]: k-a[i]

        auto it = upper_bound(a+i+1, a+n, k-a[i]);
        ans += (a+n) - it;
    }
    cout<<ans<<endl;
    return 0;
}
