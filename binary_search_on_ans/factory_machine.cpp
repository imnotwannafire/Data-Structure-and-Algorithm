// nha may co n may
// may thu i can a[i] thoi gian de tao ra 1 san pham
// can tao ra t san pham thi thoi gian ngan nhat la bao nhieu
// 1 <= n <2*10^5; 1<t<10^9; 1<ai< 10^9
// binary search on ans
// tai mid kiem tra xem co the tao ra t san pham hay ko,
// sau do cap nhat l,r va tiep tuc tim mid
// while l<=r
#include<bits/stdc++.h>
using namespace std;

# define int  long long
bool check(int a[], int n, int t, int time)
{
    int dem = 0;
    for(int i=0;i<n;i++)
    {
        dem +=time/a[i];
    }
    return dem >=t;
}
int32_t main()
{
    int n, t;
    cin >> n >> t;
    int a[n];
    for (int &x:a)cin >>x;
    int left = 0;
    int right = *min_element(a, a+n)*t;
    int ans = -1;
    while(left<=right)
    {
        int mid = (left+right)/2;
        // check mid
        if(check(a, n, t, mid))
        {
            // cap nhat left, right
            ans  =  mid;
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    cout<<ans;

}
