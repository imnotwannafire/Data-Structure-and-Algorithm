// Tim k chu so cuoi cung cua N^M
// 1<=M,n<=10^6
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll n,m;
int k;
ll kq = 1;
int main()
{
    cin >> n>>m>>k;
    ll c = pow(10,k);
    for(int i = 0; i<m; i++)
    {
        kq *= n%c;
    }
    cout<<kq%c;
    return 0;
}
