// a^b %c
//0 <a,b<=10^6

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll a,b,c;
ll kq = 1;
int main()
{

    cin >> a>>b>>c;
    for(int i = 1; i<=b;i++)
    {
        kq *=a;
        kq %=c;
    }
    cout<<kq;
    return 0;
}
