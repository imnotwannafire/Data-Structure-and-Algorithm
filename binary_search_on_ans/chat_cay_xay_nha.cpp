// Biet thu dc xay bang cac khuc go khac nhau
// Co N cay co do cao khac nhau
// cat 1 duong theo do cao H tren cac cay co do cao lon hon H
// Cho do cao cac cay trong rung va L la tong do dai can chat
// Tim H LON NHAT de chi can 1 luot la thu dc so luong L can thiet
#include<bits/stdc++.h>

using namespace std;
#define int long long

bool check(int a[], int n, int L, int h)
{
    int sum = 0;
    for(int i = 0; i< n; i++)
    {
        if(a[i]>h) sum += a[i]-h;
    }
    return sum >= L;

}

int32_t main()
{
    int n;
    cin >> n;
    int L;
    cin >> L;
    int a[n];
    for(int &x:a)
    {
        cin >> x;
    }
    int left = *max_element(a, a+n)-1;
    int right = 0;
    int ans = -1;
    while(left >= right)
    {
        int mid = (left+right)/2;
        if(check(a, n, L, mid))
        {
            right = mid + 1;
            ans = mid;
        }
        else
        {
            left = mid - 1;
        }
    }
    cout << ans;
    return 0;

}
