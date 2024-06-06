#include<bits/stdc++.h>
using namespace std;

using ll  = long long;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i =0; i< n; i++)
    {
        cin >> a[i];
    }
    // L[i] do dai cua day con tang dai nhat ket thuc o chi so i
    // L[i] = max(L[i], L[j]+1) : a[i]>a[j]
    vector<int> L(n,1);
    for(int i=0; i<n; i++)
    {
        //duyet qua tung phan tu dung truoc chi so i
        for(int j=0; j<i; j++)
        {
            if(a[i]>a[j]) L[i]=max(L[i], L[j]+1);
        }
    }
    cout<< *max_element(L.begin(), L.end());
    return 0;
}
