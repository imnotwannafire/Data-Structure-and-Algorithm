// cho mang a va 4 loai thao tac
// thao tac 1: them 1 phan tu x vao mang
// thao tac 2: xoa phan tu x
// thao tac 3: tim phan tu nho nhat
// thao tac 4: tim phan tu lon nhat
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    set<int>se;
    for(int &x:a)
    {
        cin>>x;
        se.insert(x);
    }
    int q;
    cin>> q;
    while(q--)
    {
        int thaoTac;
        cin>>thaoTac;
        switch (thaoTac)
        {
            case 1:
                int x;
                cin>>x;
                a.push_back(x);
                break;
            case 2:
                int y;
                cin>>y;
                for(int i=0; i< n; i++)
                {
                    if(a[i]==y){
                        a.erase(a.begin()+i);
                    }
                }
                break;
            case 3:
                cout<<*se.rbegin()<<endl;
                break;
            case 4:
                cout<<*se.begin()<<endl;
                break;
        }

    }

}
