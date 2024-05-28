// cho list of toy price
// cho so luong tien
// tim so luong co the mua lon nhat
// solution: chon do choi co gia nho nhat
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &x: a)
    {
        cin>>x;
    }

    sort(a.begin(), a.end());
    int ans=0;

    while(k-a[ans]>=0)
    {
        k -= a[ans];
        ans++;
    }
    cout<< ans;
    return 0;

}
