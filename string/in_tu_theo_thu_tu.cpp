// in ra cac tu khac nhau o trong 1 xau bat ky theo thu tu xuat hien hoac thu tu tang dan
// vi du "lap trinh trinh C++, lap trinh JAVA, python la ngon ngu lap trinh bac cao"
// -> "lap" "trinh" "C++" "JAVA"


#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    string s = "lap trinh trinh C++, lap trinh JAVA, python la ngon ngu lap trinh bac cao";
    set<string> se; // luu gia tri theo thu tu tang dan
    vector<string> v; // luu gia tri theo thu tu xuat hien
    stringstream ss(s);
    string word;
    while(ss>>word){
        if(se.count(word)==0)
        {
            v.push_back(word);
        }
        se.insert(word);


    }
    // in theo thu tu tang dan
    for(string x:se)
    {
        cout<< x<<" ";
    }
    cout<<endl;
    // in theo thu tu xuat hien
    for(string x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
