#include<bits/stdc++.h>
using namespace std;

using ll = long long;
ll F[100];
void ktao()
{
    F[1]=1;
    F[2]=1;
    for(int i =3 ; i<= 92; i++)
    {
        F[i] = F[i-1] + F[i-2];
    }
}
char fibo(int n, ll k)
{
    if(n==1) return 'A';
    if(n==2) return 'B';
    if(k<=F[n-2])
    {
        return fibo(n-2, k);
    }
    else{
        return fibo(n-1, k-F[n-2]);
    }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll n, k;
    cin >> n>>k;
    ktao();
    cout<<fibo(n,k);
}
