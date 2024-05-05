// Cho 1 xau gom cac tu, hay in ra cac tu thuan - nghich trong xau
// in theo thu tu do dai tang dan
// neu hai tu co do dai bang nhau thi tu nao xuat hien truoc se in ra truoc

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool tn(string s)
{
    int l = 0;
    int r = s.size()-1;
    while(l<=r){
        if(s[l]!=s[r]) return false;
        ++l;
        --r;
    }
    return true;
}
bool cmp(string a, string b)
{
    return a.size()<b.size();
}
int main(){
    string s = "php aba aaaa nguyen huu hoc pop abcbc php";
    set<string>se;
    vector<string> v;
    stringstream ss(s);
    string word;
    while(ss >> word)
    {
        if(tn(word)&&(se.count(word)==0))
        {
            se.insert(word);
            v.push_back(word);
        }
    }
    sort(v.begin(),v.end(),cmp);
    for(string x:v)
    {
        cout<<x<<' '<<endl;
    }
    return 0;


}
