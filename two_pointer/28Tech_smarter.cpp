// Cho 2 mang A và B da duoc sap xep
// Hay dem trong mang A co bao nhieu phan tu B[i]
#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m;
    cin>>n>>m;
    vector<int> A(n,0),B(m,0);
    for(auto &x:A)
    {
        cin>>x;
    }
    for(auto &x:B)
    {
        cin>>x;
    }
    vector<int> ans;
    int ptr1 = 0; // Con tro 1 tren day A
    int ptr2 = 0; // Con tro 2 tren day B
    while(ptr1<n && ptr2<m)
    {
        if(A[ptr1]<B[ptr2]) ptr1++;
        else
        {
            ans.push_back(ptr1);
            ptr2++;
        }
    }
    while(ptr2<m)
    {
        ans.push_back(ptr1);
        ptr2++;
    }

    for(int x:ans)
    {
        cout<<x<<' ';
    }
    return 0;
}
