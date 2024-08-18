#include<bits/stdc++.h>
using namespace std;
#define int long long
string s;
vector<string> table = {
    "0",
    "1",
    "abc",//2
    "def",//3
    "ghi",//4
    "jkl",//5
    "mno",//6
    "pqrs",//7
    "tuv", //8
    "wxyz"//9
    };
string tmp="";
void Try(int i, int n)
{
    int num = s[i-1]-'0';
    for(int j=0; j<table[num].size(); j++)
    {
        tmp +=table[num][j];
        if(i==n)
        {
            cout<<tmp<<endl;
        }
        else{
            Try(i+1, n);
        }
        tmp.pop_back();
    }

}
int32_t main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> s;
    int n = s.size();
    Try(1, n);

    return 0;
}
