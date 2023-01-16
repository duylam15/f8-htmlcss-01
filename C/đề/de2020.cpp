#include <iostream>
#include <math.h>
using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     float tong = 0;
//     float  mau;
//     for(int i=0; i<=n; i++)
//     {
//         mau=2*i+1;
//         tong+=(float)1/mau;
//     }
//     cout<<tong;
//     return 0;
// }

// void nhapn(int &n)
// {
//     do
//     {
//         cin>>n;
//     }
//     while(n<1);
// }
// void tonguoc(int n)
// {
//     int tong = 0;
//     for(int i=1; i<n; i++)
//     {
//         if(n%i==0)
//         {
//             tong += i;
//         }
//     }
//     cout<<tong<<" ";
// }
// int songuyento(int n)
// {
//     if(n<=2) return 0;
//     for(int i=2; i<sqrt(n); i++)
//     {
//         if(n%i==0) return 0;
//     }
//     return 1;
// }
// void sontnho(int n)
// {
//     for(int i=n+1; ; i++)
//     {
//         if(songuyento(i)==1)
//         {
//             cout<<i;
//             break;
//         }
//     }
// }
// int main() 
// {
//     int n;
//     nhapn(n);
//     tonguoc(n);
//     sontnho(n);
//     return 0;
// }

void nhapmang(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
}

void checkpt(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        if(a[i]<2020 && a[i]%2==0){
        cout<<"co ";
        break;}
        else
        { cout<<" khong ";
            break;  
    }
    }}

int tong1pt(int n)
{
    int temp=0;
    while(n!=0)
    {
        temp=temp+n%10;
        n/=10;
    }
    return temp;
}

void tongptmang(int a[], int n)
{
    int tong=0;
    for(int i=0; i<n; i++)
    {
        tong+=tong1pt(a[i]);
    }
    cout<<tong;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    nhapmang(a, n);
    checkpt(a, n);
    tongptmang(a, n);
    return 0;
}








































//