//Cho 1 xau ky tu, in ra cac tu theo thu tu co chieu dai tang dan
//Neu 2 tu co cung do dai thi in theo lon tu dien
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool cmp(string a, string b){
    if(a.size()!=b.size())
        return a.size() < b.size();
    return a<b;
}
int main(){
    string s = "lap trinh trinh C++, lap trinh JAVA, python la ngon ngu lap trinh bac cao";
    stringstream ss(s);
    vector<string> v;
    string word;
    while(ss>>word){
        v.push_back(word);

    }
    sort(v.begin(),v.end(),cmp);
    for(string x:v) cout<<x<<' ';
    cout<<endl;
    return 0;
}
