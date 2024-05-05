#include <bits/stdc++.h>
using namespace std;
using ll = long long;


ll binpow(ll a, ll b)
{
    if(b==0)
    {
        return 1;
    }
    // Di tinh a^(b/2)
    ll X = binpow(a,b/2);
    if(b%2==0)
    {
        return X*X;
        // tinh so du
        //return (X%C)*(X%c)%c
    }
    else
    {
        // tinh so du
        //return (X%C)*(X%c)*(a%c)%c
        return X*X*a;
    }
}

int main()
{
    ll a, b;
    cin>>a>>b;
    ll kq = binpow(a,b);
    cout <<kq;
    return 0;
}
