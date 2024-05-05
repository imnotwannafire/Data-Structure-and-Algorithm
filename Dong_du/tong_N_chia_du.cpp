#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll n;
ll a;
ll kq = 0;
int main()
{

    cin >> n;
    for(int i = 1; i<=n;i++)
    {
        cin>>a;
        kq +=a%1000000007;

    }
    cout<<kq%1000000007;
    return 0;
}
