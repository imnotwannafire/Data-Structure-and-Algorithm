#include<bits/stdc++.h>
using namespace std;
using ll = long long;

// Xay dung bang cac truong hop di chuyen:
//Tai diem co toa do (i,j) thi co the di den 8 diem lien ke nhu sau:
//(i-1, j-1) (i-1, j)   (i-1, j+1)
//(i, j-1)    (i, j)     (i, j+1)
//(i+1, j-1) (i+1, j)   (i+1, j+1)
//=> chuan bi san cac buoc di chuyen vao 2 mang dx, dy
int dx[8] = {-1,-1,-1,0,0,1,1,1};
int dy[8] = {-1,0,1,-1,1,-1,0,1};
int main(){
    int a[3][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9},
    };
    // Diem bat dau di chuyen co toa do (i,j)
    int i = 2;
    int j = 1;
    for (int k = 0; k<8;k++)
    {
        // di chuyen 8 o lien ke
        int i1 = i+ dx[k];
        int j1 = j+ dy[k];
        // kiem tra toa do o lien ke co nam ngoai ma tran hay khong
        if(i1<0||j1<0||i1>2||j1>2)
        {
            continue;
        }
        cout<<a[i1][j1]<<" ";

    }
    return 0;
}
