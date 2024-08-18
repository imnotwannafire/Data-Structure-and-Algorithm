// Tu thuan nghich la tu co cac ky tu doi xung nhau
// Tim cac tu thuan nghich trong xau va in ra
// Dung phuong phap 2 con tro
#include<bits/stdc++.h>
using namespace std;

bool cmp(string a, string b)
{
    return a.size()<b.size();
}
bool check_tn(string s)
{
    int r = s.size()-1;
    int l = 0;
    while(l<=r)
    {
        if(s[l]!=s[r]) return false;
        l++;
        r--;
    }
    return true;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s;
    vector<string> v;
    set<string> se;
    while(cin>>s)
    {
        if(check_tn(s)&&se.count(s)==0)
        {
            v.push_back(s);
            se.insert(s);
        }
    }
    sort(v.begin(), v.end(), cmp);
    for(string a: v)
    {
        cout<< a<<' ';
    }
}
