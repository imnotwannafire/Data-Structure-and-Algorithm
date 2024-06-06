#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void sinh(int n)
{
    vector<int> res;
    queue<int> q;
    q.push(6);
    q.push(8);
    while(true)
    {
        int x = q.front();
        q.pop();
        res.push_back(x);
        if(res.size()==n) break;
        q.push(x*10+6);
        q.push(x*10+8);
    }
    for(int x:res) cout<<x<<endl;

}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin>> n;
    sinh(n);
    return 0;
}
