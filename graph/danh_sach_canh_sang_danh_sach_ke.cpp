#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> ke[1001];
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>> m;
    for(int i = 0; i< m; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    for(int i = 1; i<=n; i++)
    {
        sort(ke[i].begin(), ke[i].end());
        cout<< i <<" : ";
        for(int j:ke[i])
        {
            cout<< j<<" ";
        }
        cout << endl;
    }


}
