// Cho N soi day co chi phi noi day N[i], noi cac doan day sao cho chi phi noi day la thap nhat
// moi buoc chon ra 2 soi day ngan nhat
#include<bits/stdc++.h>

using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    priority_queue<int, vector<int>, greater<int>> Q;
    int n;
    cin >> n;
    for(int i=0; i< n; i++)
    {
        int x;
        cin >> x;
        Q.push(x);
    }
    int ans = 0;
}
