#include<bits/stdc++.h>
#define int long long
using namespace std;
bool check(int mid, vector<int>&arr, int cows)
{
    int cnt = 1;
    auto cur_it = arr.begin();
    int cur_pos = arr[0];
//    cout<<mid<<' '<<cur_pos<<endl;
    while(cur_it!=arr.end())
    {
        cur_pos += mid;
//        cout<<"cur_pos1 "<<cur_pos<<endl;
        cur_it = lower_bound(cur_it, arr.end(), cur_pos);
        if(cur_it==arr.end())break;
        cur_pos = *cur_it;
//        cout<<"cur_pos2 "<<cur_pos<<endl;
        cnt++;
//        cout<<"cnt: "<<cnt<<endl;
        if(cnt==cows) break;
    }
    return cnt>=cows;
}

// Check 2
bool check2(int mid, vector<int>&arr, int cows)
{

    int cnt = 1;
    int last = arr[0];
    for(int i=1; i<arr.size(); i++)
    {
        if(arr[i]-last>=mid)
        {
            cnt++;
            if(cnt==cows)break;
            last = arr[i];
        }
    }
    return cnt>=cows;
}
int32_t main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,c;
        cin>>n>>c;
        vector<int> arr(n);
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int left = 1;
        int ans = 0;
        int right = arr[n-1]-arr[0];
        while(left<=right)
        {
            int mid = (left+right)/2;
            if(check2(mid, arr, c))
            {
                ans = mid;
                left=mid+1;
            }
            else
            {
                right = mid - 1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
