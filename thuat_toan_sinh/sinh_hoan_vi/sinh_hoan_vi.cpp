#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int n, a[100], final = 0;
void khoi_tao()
{
    for(int i = 1; i<=n; i++)
    {
        a[i] = i;
    }
}
void sinh()
{
    int i = n - 1;
    // di tim vi tri i dau tien ma a[i]<a[i+1]
    while(i>=1 && a[i]>a[i+1])
    {
        -- i;
    }
    if(i==0)// cau hinh dang la giam dan
    {
        final = 1;
    }
    else{
        // di tim a[j] > a[i] nho nhat co the
        int j = n;
        while(a[i]> a[j]) --j;
        swap(a[i], a[j]);
        reverse(a+i+1, a+n+1);
    }
}
vector<vector<int>> res;
int main()
{
    cin >> n;
    int x[100];
    // C1: dung ham sinh
//    khoi_tao();
//    while(final == 0)
//    {
//        vector<int> tmp(a+1, a+n+1);
//        res.push_back(tmp);
//        sinh();
//    }
//    for(int i = 0; i< res.size(); i++)
//    {
//        for(int x: res[i])
//            cout<<x<<' ';
//        cout<< endl;
//    }
    // Cach 2: dung ham next_permutation
    int X[] = {1,2,6,9,8,7,5,4,3};
    next_permutation(X, X+9);
    for(int x: X) cout<<x<<' ';
    string s = "987654321";
    next_permutation(s.begin(), s.end());
    cout<<s<<endl;
    khoi_tao();
    do{
        for(int i =1; i<n; i++)
            cout<<a[i]<< ' ';
        cout<<endl;
    }while(next_permutation(a+1, a+n+1));
}
