// danh sach ke: co dang i 1 2 3 4 5
// Trong do i la dinh, 1 2 3 4 5 la cac dinh ke voi dinh i
// Danh sach canh: danh sach cac canh
// 1 2, 1 3, 1 4, 1 5.
#include<bits/stdc++.h>
using namespace std;

void solved(int i, string s)
{
    stringstream ss(s);
    string tmp;
    while(ss>>tmp)
    {
        int dinh = stoi(tmp);
        if(i<dinh) cout<<i<< " "<<dinh<<endl;
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    scanf("\n");
    for(int i=1;i<=n; i++)
    {
        string s;
        getline(cin,s);
        //cout<<s<<endl;
        solved(i,s);
    }
}
