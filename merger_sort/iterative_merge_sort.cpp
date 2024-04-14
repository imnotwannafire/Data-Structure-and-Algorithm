#include <iostream>
#define MAX 100
using namespace std;
int nb, nc;
void nhap(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Nhap gia tri phan tu a["<<i<<"]:";
        cin>>a[i];
    }
}
void xuat(int a[], int n)
{
    for(int i = 0; i<n; i++)
    {
        
        cout<< " "<< a[i]<<" ";
        
    }
    cout<<endl;

}

/*B1: Xay dung ham phan phoi day A thanh 2 day con B va day C theo k*/
void Phanphoi(int a[], int b[], int c[], int Na, int k)
{
    int ja, jb, jc;
    ja = jb = jc = 0;
    nb = nc = 0;
    xuat(a,Na);
    while(ja<Na)
    {
        for(int i = 0; (i<k) && (ja<Na); i++)
        {   
            b[jb++] = a[ja++];
        }
        for(int i = 0; (i<k) && (ja<Na); i++)
        {   
            c[jc++] = a[ja++];
        }
    }  
      
    nb = jb;
    nc = jc;
    cout<< "gia tri day b, c:"<<endl;
    xuat(b,nb);
    xuat(c,nc);
}

/*B2: Tron 2 day con B va C theo tung cap voi buoc tron la k*/
// Tim so nho nhat
int min(int a, int b)
{
    if (a>b) return b;
    return a;
}
// Tron 2 day con 
void Tron(int a[], int b[], int c[], int N, int nb, int nc, int k)
{
    int ia,ib,ic; //chi so cua cac phan tu 
    ia = ib = ic = 0;
    int ja, jb, jc;
    ja = jb = jc = 0; // Chi so cua tap con
    int kb, kc;

    while((ja<N) && (nb>0) && (nc>0)) //Xet tren toan day A
    {
        kb = min(k,nb); // Do dai cua day con trong day b khi tron
        kc = min(k,nc); // Do dai cua day con trong day c khi tron
        if(b[jb+ib] < c[jc+ic])
        {
            if(ib == kb)
            {  
                a[ja++] = c[jc+ic];
                ic++;

            }
            else{
                a[ja++] = b[jb+ib];
                ib ++;
            }
        }
        else{
            if(ic == kc)
            {
                a[ja++] = b[jb+ib];
                ib++;
            }
            else{
                a[ja++] = c[jc+ic];
                ic++;
            }
        }
        if(ib==kb && ic==kc)
        {
            ib = ic = 0;
            jb +=kb;
            jc +=kc;
            nb -=kb;
            nc -=kc;
        }
    }
}
int main()
{
    int a[MAX];
    int N;
    cout<<"Nhap gia tri phan tu N:"<<endl;
    cin>>N;
    cout<<N<<endl;
    nhap(a,N);
    int b[MAX], c[MAX];
    for (int k = 1; k<N;k*=2)
    {
        cout<<"Gia tri k: "<<k<<endl;
        Phanphoi(a,b,c,N,k);
        cout<<nb<<" "<<nc<<endl;
        Tron(a,b,c,N,nb,nc,k);
    }
    xuat(a,N);
    return 0;
}