//Dem so luong tu trong string
#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main()
{
    int n=5;
    vector<string> a{"toi", "la", "le", "duc", "loc","LE", "Le", "Duc"};
    sort(a.begin(), a.end(), greater<string>());
    for(int i = 0; i<a.size();i++)
    {
        cout<< a[i]<<endl;
    }


    //Dem so luong tu khac nhau trong xau: "toi", "la", "le", "duc", "loc","LE", "Le", "Duc" -> toi, la, le, duc, loc
    cout<<"DEM SO LUONG TU KHAC NHAU TRONG XAU"<<endl;
    set<string> se;

    for(int i = 0; i<a.size();i++)
    {
        transform(a[i].begin(), a[i].end(),a[i].begin(),::tolower);
        se.insert(a[i]);
    }
    for(auto x:se)
    {
        cout<<x<<endl;
    }

    //Dem so lan xuat hien cua 1 tu
    cout<<"DEM SO LAN XUAT HIEN 1 TU KHAC NHAU TRONG XAU"<<endl;
    map<string, int> mp;
    for(auto x:a)
    {
        mp[x]++;
    }
    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }


    return 0;
}
