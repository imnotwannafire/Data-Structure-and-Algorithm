// Cho so nguyen duong N co khong qua 16 chu so
// Tach cac chu so cua N thanh cac so nho hon va phai dam bao so thuan nghich
// Khong duoc dao thu tu cac so cua N
// In ra moi cach
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n;
string s;
vector<vector<string>> res;
vector<string> v;
bool isPalidrome(string s)
{
    int l = 0;
    int r = s.size()-1;
    while(l<r){
        if(s[l] != s[r]) return false;
        ++l;
        --r;
    }
    return true;
}
void Try(int start, string s)
{
   if(start >= s.size()) res.push_back(v);
   for(int end = start; end<s.size();end++)
   {
       if(isPalidrome(s.substr(start,end-start+1)))
       {
           v.push_back(s.substr(start, end-start+1));
           Try(end+1, s);
           v.pop_back();
       }
   }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> s;
    Try(0,s);
    for(auto it: res)
    {
        for(string x: it) cout<<x<<' ';
        cout<<endl;
    }



}
