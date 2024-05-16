// may photo 1 can x giay de photo 1 ban
// may photo 2 can y giay de photo 1 ban
// Tinh thoi gian nho nhat de photo duoc n ban
#include<bits/stdc++.h>
using namespace std;
#define int  long long
bool check(int n, int x, int y, int time)
{
    time -= min(x,y); // photo ra 1 ban dau tien
    return time/x + time/y >= n-1;
}

int32_t main()
{
    int n, x, y;
    cin>> n >> x >> y;
    int left = 0;
    int right = min(x,y) *n;
    int ans = -1;
    while (left<=right)
    {
        int mid = (left+right)/2;
        if(check(n,x,y, mid))
        {
            ans = mid;
            right = mid - 1;
        }
        else{
            left = mid + 1;

        }
    }
    cout << ans;

}
