// Cho N chu so.
// tim so co n chu so chi gom co 3 va 5 sao cho
// So chu so 5 phai chia het cho 3
// So chu so 3 phai chia het cho 5
// in ra so lon nhat co the
#include<bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(int n)
{
    for(int a=n/3; a>=0; a--)
    {
        int tmp = n - a*3;
        if(tmp%5==0)
        {
            for(int i = 1; i<=3*a; i++) cout<<"5";
            for(int i = 1; i<=tmp; i++) cout<<"3";
            cout<<endl;
            return;
        }

    }
    cout<<"-1"<<endl;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        solve(n);
    }
    return 0;
}
