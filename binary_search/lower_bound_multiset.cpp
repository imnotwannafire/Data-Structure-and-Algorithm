#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n; cin>>n;
    vector<int> ms;
    // nhap vao mang tang dan
    for(int i = 0; i< n; i++)
    {
        int x;
        cin>>x;
        ms.push_back(x);
    }
    // auto it = lower_bound(ms.begin(), ms.end(),2);
    auto it = lower_bound(ms.begin(), ms.end(),2); //nhanh hon
    // in ra gia tri dau tien lon hon 5
    cout<<*it<<endl;
    // in ra vi tri dau tien lon hon 5
    cout<<it-ms.begin()<<endl;
    return 0;

}
