#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n,k;
string s;
vector<string> res;
string tmp="";
void Try(int idx)
{
    for(int j = idx; j<n; j++)
    {
        tmp += s[j];
        if(tmp.size() == k )
        {
            res.push_back(tmp);
        }
        else{
            Try(j);
        }
        tmp.pop_back();
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n >>k;
    cin >> s;
    sort(s.begin(), s.end());
    Try(0);
    if(res.size()==0)
    {
        cout<<"NOT FOUND"<<endl;
        return 0;
    }
    for(string tmp : res)
    {
        cout<< tmp;
        cout<<endl;
    }
    return 0;

}
