//Cap so co tong nho hon k
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int k;
    cin>>k;
    ll ans = 0;
    for(auto &x:a)
    {
        cin>>x;
    }
    sort(a, a+n);
    for(int i = 0; i<n;i++)
    {
        auto it = lower_bound(a+i+1,a+n, k-a[i]);
        --it; // vi tri cuoi cung cua phan tu nho hon k-a[i]
        ans +=it-(a+i);
    }
    cout<<ans;
    return 0;
}
