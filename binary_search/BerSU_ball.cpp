// co n ban trai va m ban gai
// ky nang khieu vu cua ban nam chua trong 1 mang
// ky nang khieu vu cua ban gai chua trong 1 mang
// ghep cap nam - nu, sao cho ky nang cua ban nam khong lon hon ky nang cua ban nu qua 1 don vi
// solution: sort danh sach ky nang ban nu va nam theo thu tu tang dan
#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main()
{
    int n, m;
    cin >> n >> m;
    long cnt = 0;
    long a[n], b[m];
    for(long &x:a) cin>> x;
    for(long &x:b) cin>>x;
    sort(a, a+n);
    sort(b, b+m);
    int i = 0, j=0;
    while(i<n&&j<m)
    {
        if(abs(a[i]-b[i])<=1)
        {
            i++;
            j++;
            cnt++;
        }
        else if((a[i]-b[j])>1) j++;
        else i++;

    }
    cout<<cnt;
}
