// thanh domino co kich thuoc axb
// tim 1 hinh vuong co canh nho nhat sao cho xep n thanh domino vao hinh vuong nay
// Khong duoc phep xoay ngang domino

#include<bits/stdc++.h>
using namespace std;
#define int long long

bool check(int n, int a, int b, int mid)
{
    int max_domino = (mid/a) * (mid/b);
    return max_domino >= n;
}
int32_t main()
{
    int n,a,b;
    cin>> n>>a>>b;
    int left = max(a,b);
    int right = n*max(a,b);
    int ans = 0;
    while(left <= right)
    {
        int mid = (left+right)/2;
        if(check(n, a,b, mid))
        {
            ans = mid;
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    cout << ans;
    return 0;

}
