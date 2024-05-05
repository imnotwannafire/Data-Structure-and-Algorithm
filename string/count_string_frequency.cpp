//Dem moi tu xuat hien bao nhieu lan trong xau ky tu
//in ra tu va so lan xuat hien
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    string s = "php aba aaaa nguyen huu hoc pop abcbc php";
    set<string>se;
    vector<string> v;
    stringstream ss(s);
    string word;
    map<string,int> mp;
    while(ss>>word)
    {
        mp[word]++;
        v.push_back(word);
    }
    // in theo thu tu xuat hien
    for(auto it:mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

    // in theo thu tu tu dien
    return 0;


}
