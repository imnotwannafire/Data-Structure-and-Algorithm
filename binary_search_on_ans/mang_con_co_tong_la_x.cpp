//mang A co N so nguyen
// Dem so mang con co tong la X
// Mang khong am
// Y tuong: co bao day con ket thuc tai i ma co tong bang X
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{

    int n,x;
    cin >> n >> x;
    int a[n];
    for(int& x:a) cin >> x;
    ll tong = 0;
    map<ll, int> mp;
    ll ans =0;
    for(int i = 0; i<n; i++)
    {

        tong += a[i];
        if(tong == x) ++ans;
        if(mp.count(tong-x)) ++ans; //tim trong cac tong duoc danh dau trong map, co tong nao thoa man x+ mappedTong = tong
        mp[tong] == 1; // Danh dau lai tong

    }
    cout<<ans<<endl;
    return 0;

}
