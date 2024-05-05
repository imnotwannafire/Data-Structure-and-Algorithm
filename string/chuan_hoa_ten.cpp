// Chuan hoa ten nguyen van nam -> Nguyen Van Nam
// Chuan hoa ngay thang nam -> dd/mm/yyyy

#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;


int main()
{
    string s;
    getline(cin,s);
    string new_name = "";
    stringstream ss(s);
    string word;
    while(ss>>word)
    {
        new_name +=toupper(word[0]);
        for(int j = 1; j<=word.size(); j++)
        {
            new_name += tolower(word[j]);
        }
        //new_name +=' ';
    }
    new_name.pop_back();
    cout<<new_name<<endl;

    //chuan hoa ngay sinh
    string ns; cin>>ns;
    stringstream ss1(ns);
    int dem = 0;
    while(getline(ss1,word,'/'))
    {
        ++dem;
        cout<<setfill('0')<<setw(2)<<stoi(word);
        if(dem!=3) cout<<'/';
    }
    return 0;

}
