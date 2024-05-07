//1 con duong co do dai l, duoc thap sang boi n chiec den long
// den long thu i o diem ai.
// ban kinh chieu sang cua den long la d
// tinh d toi thieu de den long thap sang  ca con duong

#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main()
{
    int l, n;
    cin >> l >> n;
    int a[n];                   // luu vi tri cac den long
    for(int i = 0; i< n; i++)
    {
        cin>> a[i];             // nhap vi tri cac den long
    }
    sort(a, a+n);               // Sap xep vi tri cac den long  theo thu tu tu nho den lon
    ll max_dist = max(a[0], l-a[n-1]); // khoang cach tu den long o cuoi duong den cuoi duong
    for(int i =1; i<n;i++)
    {
        max_dist = max(max_dist,(ll) ((a[i]-a[i-1])/2));
    }
    cout << max_dist;
    return 0;

}
