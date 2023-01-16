#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>
using namespace std;

// struct doanhnghiep
// {
//     char madn[30];
//     char giamdoc[30];
//     float vondieule;
//     int sonhanvien;
// };

// void nhap1dn(doanhnghiep &x)
// {
//     cout<<endl;
//     cout<<"nhap ma dn "<<endl;
//     fflush(stdin);
//     gets(x.madn);
//     cout<<"nhap giam doc "<<endl;
//     fflush(stdin);
//     gets(x.giamdoc);
//     cout<<"nhap von dieu le "<<endl;
//     fflush(stdin);
//     cin>>x.vondieule;
//     cout<<"nhap so nhan vien "<<endl;
//     fflush(stdin);
//     cin>>x.sonhanvien;
// }

// void xuat1dn(doanhnghiep x)
// {
//     cout<<endl;
//     cout<<"ma dn"<<x.madn<<endl;
//     cout<<"giam doc " << x.giamdoc<<endl;
//     cout<<"von dieu le "<< x.vondieule<<endl;
//     cout<<"so nhan vien " << x.sonhanvien<<endl;
// }

// void nhapds(doanhnghiep a[], int n)
// {
//     cout<<endl;
//     for(int i=0; i<n; i++)
//     {
//         nhap1dn(a[i]);
//     }
// }
// void xuatds(doanhnghiep a[], int n)
// {
//     cout<<endl;
//     for(int i=0; i<n; i++)
//     {
//         xuat1dn(a[i]);
//     }
// }
void sapxep(doanhnghiep a[], int n)
{
    doanhnghiep tg;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n;  j++)
        {
            if(a[i].vondieule>a[j].vondieule)
            {
                tg=a[i];
                a[i]=a[j];
                a[j]=tg;
            }
        }
    }
}
// void in(doanhnghiep a)
// {
//     cout<<"ma dn "<<a.madn<<endl;
//     cout<<"so nv "<<a.sonhanvien<<endl;
// }
// void indn(doanhnghiep a[], int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         if(a[i].sonhanvien>300 && a[i].madn[0]=='D' && a[i].madn[1]=='N')
//         {
//             in(a[i]);
//         }
//     }
// }
// int ktdau(char madn[])
// {
//     for(int i=0; i<strlen(madn); i++)
//     {
//         if(madn[i]==' ')
//         return 1;
//     }
//     return 0;
// }
// void demkhonghople(doanhnghiep a[], int n)
// {
//     int dem=0;
//     for(int i=0; i<n; i++)
//     {
//         if(a[i].vondieule<10 || ktdau(a[i].madn)==1)
//         dem++;
//     }
//     cout<<"so doanh nghiep khong hop le la "<<dem<<endl;
// }
// int main()
// {
//     doanhnghiep x;
//     int n;
//     cin>>n;
//     doanhnghiep a[n];
//     nhapds(a, n);
//     demkhonghople(a , n);
//     return 0;
// }

void nhapmang(int a[], int n)
{
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
}

int s(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        if(a[i]%2==0)
        return 1;
    }
    return 0;
}

int main()
{

    int n;
    cin>>n;
    int a[n];
    nhapmang(a, n);
    int max;
    for(int i=0; i<n; i++)
    {
        if(s(a, n) )
        {
            max=a[i];
            break;
        }
    }
    for (int i=0; i<n; i++)
    {
        if(s(a, n) && a[i] >max) max=a[i];
    }

    cout<<max;
    return 0;
}

























































































//