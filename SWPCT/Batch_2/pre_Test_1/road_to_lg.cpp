#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>& a, vector<int>& b, vector<int>& c, int n, int x, int mid)
{
    int cnt = 0;
    int i = 0;
    int remaining_gas = c[mid];
    cout<<"remaining_gas: "<<remaining_gas<<endl;
    int end = n-1;
    int home = 0;
    int current_x = 0;
    int current_y = 0;
    while(home != n-1&&end!=0)
    {
        int need_gas = abs(a[end]-current_x) + abs(b[end]-current_y);
        cout<<"end before: "<<end<<endl;

        if(remaining_gas<need_gas)
        {
            end --;

        }
        else
        {
            //cap nhat current
            current_x = a[end];
            current_y = b[end];
            home = end;
            end = n-1;
            if(home<end)
            {
               cnt ++;
            }

        }

        cout<<"need_gas: "<<need_gas<<endl;

        cout<<"end after: "<<end<<endl;
        cout<<"home: "<<home<<endl;
        cout<<"cnt: "<<cnt<<endl;
    }

    return (home==n-1) && (cnt<=x);
}
int main()
{
    int n, m,x;
    // cin>>n>>m>>x;
    n = 5;
    m = 3;
    x = 1;
    vector<int> a{1,2,3,4,5};
    vector<int> b{1,2,3,4,5};
    // for(auto &x:a)cin>>x;
    // for(auto &x:b)cin>>x;
    vector<int> c{1,9,6};
    // for(auto &x:c)cin>>x;
    sort(c.begin(), c.end());
    int left = 0;
    int right = m-1;
    int ans = -1;
    while(left<=right)
    {
        cout<<"start"<<endl;
        cout<<"left: "<<left<<endl;
        cout<<"right: "<<right<<endl;
        int mid = (left+right)/2;
        cout<<"mid: "<<mid<<endl;
        if(check(a,b,c,n,x, mid))
        {
            cout<<"true"<<endl;
            right = mid -1;
            ans = c[mid];

        }
        else
        {
            cout<<"false"<<endl;
            left = mid +1;
        }
        cout<<"end"<<endl;
    }
    cout<<ans;
    return 0;

}
