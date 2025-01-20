#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<vector<int>> v;
vector<int> cur;
vector<int> a;
vector<bool> used;
int ans = INT_MAX;
void Try(int sum)
{
    int lastIndex = cur.back();
    if(cur.size()==k)
    {
        sum+= v[lastIndex][0];
        if(sum <= ans)
        {
            ans = sum;
            a = cur;
        }
       return;
    }
//    cout<<lastIndex<<endl;
    for(int i = 0; i<n; i++)
    {
        if(!used[i])
        {
           cur.push_back(i);
           used[i]=true;
           sum += v[lastIndex][i];
           if(sum<=ans)
           Try(sum);
           cur.pop_back();
           used[i]=false;
           sum -= v[lastIndex][i];
        }
    }
    return;
}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    v.resize(n, vector<int>(n));
    used.resize(n,false);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n;j++)
        {
            cin>>v[i][j];

        }
    }
    cur.push_back(0);
    used[0]=true;
    //Generate all combination of order 1-2-3-4, 1-2-4-5...
    Try(0);
    cout<<ans<<endl;
    for(auto x:a)
    {

        cout<<x+1<<' ';

    }
    return 0;

}
