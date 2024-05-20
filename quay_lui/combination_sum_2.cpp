// Cho n va k
// Tinh tong k so nguyen to sao cho co tong bang n
// So nguyen to < 500
// sinh ra cac so nguyen to va luu vao 1 vector

#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n, k;
vector<int> prime;
vector<vector<int>> res;
vector<int> tmp;
bool isPrime(ll n)
{
    for(int i = 2; i<= sqrt(n); i++)
    {
        if(n%i==0) return false;

    }
    return n>1;
}

void Try(int idx, int sum)
{
    for(int j = idx; j<=prime.size(); j++)
    {
        tmp.push_back(prime[j]);
        sum += prime[j];
        if(sum == n&&tmp.size()==k)
        {
            res.push_back(tmp);
        }
        else if(sum < n && tmp.size() < k){
            Try(j+1, sum);
        }
        tmp.pop_back();
        sum -= prime[j];
    }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for(int i = 1; i<= 500; i++)
    {
        if(isPrime(i)) prime.push_back(i);
    }
    cin >> n >> k;
    Try(0, 0);
    if(res.size()==0)
    {
        cout<<"NOT FOUND"<<endl;

    }
    else
    {
        sort(res.begin(), res.end());
        {
            for(auto tmp:res)
            {
                for(int j = 0; j < tmp.size(); j++)
                {
                    cout<<tmp[j];
                    if(j!=tmp.size()-1) cout<<" + ";
                }
                cout<<endl;
            }

        }
    }

}
