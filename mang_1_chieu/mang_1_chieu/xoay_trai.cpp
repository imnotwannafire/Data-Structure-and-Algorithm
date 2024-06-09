// dich phan tu sang trai k vi tri
// phan tu dau tien se bi dich ve phan tu cuoi
#include<bits/stdc++.h>
#define int long long

using namespace std;

int32_t main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n,k;
    cin >> n >>k;
    vector<int> a(n);
    for(int &x:a) cin>>x;
    k = k%n;
    vector<int> b(a.begin(), a.begin()+k);
//    for(int i=0; i<k; i++)
//    {
//        b.push_back(a[i]);
//    }

    for(int i=k; i<n;i++)
    {
        //a[i-k]=a[i];
        cout<<a[i]<<' ';
    }
    for(int i=0; i<k;i++)
    {
        //a[n-k+i] = b[i];
        cout<<a[i]<<' ';
    }

}
