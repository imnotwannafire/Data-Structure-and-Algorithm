// Cho so nguyen khong am N, tinh tong cac chu so cua N
#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    cin>>s;
    int sum=0;
    for(char x:s)
    {
        sum+= x -'0';
    }

    cout<<sum;
}
