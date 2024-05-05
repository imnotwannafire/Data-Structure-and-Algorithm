// N giai thua chia du cho 10^9+7
//N<=10^6
//Neu tinh N giai thua thi se bi tran so

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll n;
ll gt = 1;
int main()
{
    ll res;
    cin >> n;
    for(int i = 1; i<n;i++)
    {
        gt = (gt%1000000007)*(i%1000000007)%1000000007;
    }
    cout<<gt;
    return 0;
}
