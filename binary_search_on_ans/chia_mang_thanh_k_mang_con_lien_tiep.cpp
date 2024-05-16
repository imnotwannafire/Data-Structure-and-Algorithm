// mang N so nguyen duong
// Chia mang thanh k mang con sao cho tong cac phan tu tren 1 mang con cang nho cang tot
// Output MAX TONG
// 1< n< 2* 10^5, 1<=k<=n; 1<=xi<=10^9
// chat nhi phan tren tong cua 1 mang con
#include<bits/stdc++.h>
using namespace std;
#define int long long

bool check(int a[], int n, int k, int sum)
{
    int cnt = 0;
    int temp = 0;
    for(int i = 0; i< n; i++)
    {
        temp +=a[i];
        if (temp > sum)
        {
            cnt ++;
            temp = a[i];
        }
    }
    ++ cnt;
    return cnt <= k;
}

int32_t main()
{
    int n, k;
    cin >> n>>k;
    int a[n];
    int right = 0;
    for(int &x:a)
    {
        cin>>x;
        right +=x;
    }

    int left = *max_element(a, a+n);
    int ans = -1;
    while (left<=right)
    {
        int mid =(left+right)/2;
        if(check(a, n, k, mid))
        {
            ans = mid;
            right = mid -1;
        }
        else{
            left = mid+1;
        }
    }
    cout << ans;
    return 0;
}
