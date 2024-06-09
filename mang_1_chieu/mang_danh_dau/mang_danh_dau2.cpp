// dem tan xuat cua cac phan tu trong mang a
// Nhuoc diem: mang khong am, toi da 10^7 phan tu
#include<bits/stdc++.h>
#define int long long

using namespace std;


int32_t main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x:a) cin>>x;
    int max_ele = *max_element(a.begin(), a.end());
    vector<int> cnt(max_ele+1);
    for(int i=0; i< n; i++)
    {
        // danh dau su xuat hien cua a[i]
        cnt[a[i]]++;
    }

    for(int i=0; i<=max_ele;i++)
    {
        if(cnt[i])
        {
            cout << i <<' '<<cnt[i]<<endl;
        }
    }



}
