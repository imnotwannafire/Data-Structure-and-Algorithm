// cho day array a va 1 so k
// tao 1 day array' co do dai la k sao cho chi so khong cong bang la nho nhat
// chi so cong bang duoc tinh bang max(array') - min(array')

// su dung cua so truot
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, k;
    cin >> n>>k;
    vector<ll> arr(n);
    for(int i = 0; i< n; i++)
    {
        cin>> arr[i];
    }
    sort(arr.begin(), arr.end());
    ll ans = 1e18;
    for(int i = 0; i<=n-k; i++)
    {
        ans = min(ans,arr[i+k-1]-arr[i]);

    }
    cout<<ans;
}
