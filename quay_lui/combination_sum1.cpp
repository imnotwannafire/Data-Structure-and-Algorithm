#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n, k;

vector<vector<int>> res;
vector<int> tmp;
void Try(int init, int sum)
{
    for(int j = init; j<=9; j++)
    {
        tmp.push_back(j);
        sum += j;
        if(sum == n&&tmp.size()==k)
        {
            res.push_back(tmp);
        }
        else if(sum < n && tmp.size() < k){
            Try(j+1, sum);
        }
        tmp.pop_back();
        sum -= j;
    }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    Try(1, 0);
    if(res.size()==0)
    {
        cout<<"NOT FOUND"<<endl;

    }
    else
    {
        sort(res.begin(), res.end());
        {
            for(auto tmp:res)
            {
                for(int j = 0; j < tmp.size(); j++)
                {
                    cout<<tmp[j];
                    if(j!=tmp.size()-1) cout<<" + ";
                }
                cout<<endl;
            }

        }
    }

}
