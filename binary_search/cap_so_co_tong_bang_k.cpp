// cho mang a gom n phan tu . Dem so cap ai, aj co tong bang k
//n<=10^6
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
        auto it1 = lower_bound(a+i+1, a+n, k-a[i]);
        auto it2 = upper_bound(a+i+1, a+n, k-a[i]);
        ans += it2 -it1;
    }
    cout<<ans<<endl;
    return 0;
}
