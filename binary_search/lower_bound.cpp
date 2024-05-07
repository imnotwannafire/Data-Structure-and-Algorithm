#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n; cin>>n;
    int a[n];
    // nhap vao mang tang dan
    for(int &x:a)
    {
        cin>>x;
    }
    auto it = lower_bound(a, a+n,5);
    // in ra gia tri dau tien lon hon 5
    cout<<*it<<endl;
    // in ra vi tri dau tien lon hon 5
    cout<<(it-a)<<endl;
    return 0;

}
