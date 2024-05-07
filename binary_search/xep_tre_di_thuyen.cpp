// cho 1 thuyen chi cho duoc toi da k kg
// cho 1 mang a chua trong luong cua n dua tre
// ghep cac dua tre len thuyen sao cho moi thuyen chi co 2 tre va so thuyen la nho nhat.
// Solution sort ket hop 2 con tro

#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int s;
    cin>>s;
    int n;
    cin >> n;
    int a[n];
    for (int &x:a)
    {
        cin>>x;
    }
    int l = 0;
    int r = n-1;
    int ans = 0;
    sort(a, a+n);
    while(l<r)
    {
        if((a[l]+a[r])<=s){
            ++l;
            --r;
            ++ans;
        }else{
            --r;
            ++ ans;
        }
    }
    if(l==r)ans++;
    cout<<ans;
    return 0;

}
