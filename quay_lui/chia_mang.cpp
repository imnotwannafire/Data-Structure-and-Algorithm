// Chia mang thanh k tap con khac rong sao cho tong cac phan tu bang s
#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,k,s, x[100], a[100];
bool used[100];
int cnt=0;
set<vector<int>> st;
int ok = 0;
void Try(int i, int from, int sum, int cnt)
{
    if(cnt==k+1)
    {
        ok = 1; return;
    }
    for(int j=from; j<=n; j++)
    {
        if(!used[j])
        {
            if(sum+a[j]<=s)
            {
                x[i]=a[j];
                sum+=a[j];
                used[j]=true;
                if(sum==s)
                {
                    vector<int> tmp(x+1, x+i+1);
                    st.insert(tmp);
                    Try(1, 1,0,cnt+1);
                }
                else
                {
                    Try(i+1,j+1, sum,cnt);
                }
                sum -=a[j];
            }   used[j] = false;
        }

    }

}
int32_t main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        s +=a[i];
    }
    if(s%k==0) s/=k;
    else
    {
        cout<<0<<endl;
        return 0;
    }
    sort(a+1, a+1+n);

    Try(1,1,0,1);
    if(ok==1)
    {
        cout<<st.size()<<endl;
        for(auto it:st)
        {
        cout<<"{";
        for(int i=0;i<it.size(); i++)
        {
            cout<<it[i];
            if(i<it.size()-1) cout<< ' ';
        }
        cout<<"}\n";
        }
    }
    else cout<<0<<endl;

    return 0;
}
