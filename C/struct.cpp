#include <iostream>
#include <math.h>
#include <string.h>
#include <iomanip>
#include <cstdio>
using namespace std;

// struct sinhvien
// {
//     char hoten[30];
//     char mssv[30];
//     int tuoi;
//     float diem;
// };
// void nhapsv(sinhvien &x)
// {
//     cout<<"nhap ten sv ";
//     fflush(stdin);
//     gets(x.hoten);
//     cout<<"nhap mssv ";
//     fflush(stdin);
//     gets(x.mssv);
//     cout<<"nhap tuoi ";
//     cin>>x.tuoi;
//     cout<<"nhap diem ";
//     cin>>x.diem;
// }
// void xuatsv(sinhvien x)
// {
//     cout<<"ho ten : "<<x.hoten<<endl;
//     cout<<"mssv: "<<x.mssv<<endl;
//     cout<<"tuoi: "<<x.tuoi<<endl;
//     cout<<"diem: "<<x.diem<<endl;
// }
// void nhapnhieusv(sinhvien a[], int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         cout<<"nhap thong tin sinh vien "<<i+1<<endl;
//         nhapsv(a[i]);
//     }
// }
// void xuatnhieusv(sinhvien a[], int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         cout<<"thong tin sinh vien "<<i+1<<" la "<<endl;
//         xuatsv(a[i]);
//         cout<<endl;
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     sinhvien x[n];
//     nhapnhieusv(x, n);
//     cout<<endl;
//     xuatnhieusv(x, n);
//     return 0;
// }

 struct DIEM
{
    float x;
    float y;     
};

void nhaptoado(DIEM &diem)
{
    cin>>diem.x>>diem.y;
}

void nhapnhieutoado(DIEM a[], int n)
{
    for(int i=0; i<n; i++)
    {
        nhaptoado(a[i]);
    }
}

void khoangcach(DIEM diem)
{
    float khoangcach = sqrtf(pow(diem.x,2) + pow(diem.y,2));
    cout<<"khoang cach giua 2 diem : "<<khoangcach<<endl;
}

//---------------tim diem doi xung-----------------//

//doi xung qua truc Ox(doixungOx)

void doixungOx(DIEM diem)
{
    cout<<" ----------doi xung qua truc Ox-------------------"<<endl;
    cout<<"toa do ban dau : ( "<<diem.x<<","<<diem.y<<")"<<endl;
    int y1;//y1 la diem doi xung cua diem.y
    y1 = (-1) * diem.y;
    cout<<"toa do doi xung qua truc Ox :  ( "<<diem.x<<","<<y1<<")"<<endl;
}
//doi xung qua truc Oy(doixungOy)
void doixungOy(DIEM diem)
{
    cout<<" ----------doi xung qua truc Oy-------------------"<<endl;
    cout<<"toa do ban dau : ( "<<diem.x<<","<<diem.y<<")"<<endl;
    int x1;//x1 la diem doi xung cua diem.x
    x1 = (-1) * diem.x;
    cout<<"toa do doi xung qua truc Oy :  ( "<<x1<<","<<diem.y<<")"<<endl;
}
//doi xung qua goc toa do (doixunggoctoado)
void doixunggoctoado(DIEM diem)
{
    cout<<" ----------doi xung qua goc toa do-------------------"<<endl;
    cout<<"toa do ban dau : ( "<<diem.x<<","<<diem.y<<")"<<endl;
    int x1;//x1 la diem doi xung cua diem.x
    x1 = (-1) * diem.x;
    int y1;//y1 la diem doi xung cua diem.y
    y1 = (-1) * diem.y;
    cout<<"toa do doi xung qua goc toa do :  ( "<<x1<<","<<y1<<")"<<endl;
}
//-----------kiem tra phan tu thuoc phan tu nao----------------//
//----------------void kiemtra()------------------//
/*                   . y
                     .
                     .
                     .
                     .
           . . . . . O . . . . . x
                     .
                     .
                     .
                     .
                     .          
                                                 */

void kiemtra(DIEM diem)
{
    float x1 = diem.x;
    float y1 = diem.y;
    if( x1==0 && y1==0) cout<<"diem la goc toa do"<<endl; 
    else 
      if(x1 == 0 && y1 != 0) cout<<" diem thuoc truc Oy"<<endl;
    else 
      if(x1!=0 && y1==0) cout<<"diem thuoc truc Ox"<<endl;
    else             
      if( x1 > 0)
        {
              if(y1 > 0) cout<<"diem thuoc phan tu thu nhat "<<endl;
              else cout<<" diem thuoc phan tu thu tu"<<endl;
        }
      else 
        {
              if(y1 > 0) cout<<"diem thuoc phan tu thu hai "<<endl;
              else cout<<" diem thuoc phan tu thu ba"<<endl;  
        } 
}
int main()
{
     DIEM toado;
     nhaptoado(toado);
     khoangcach(toado);
     kiemtra(toado);
     doixungOx(toado);
     doixungOy(toado);
     doixunggoctoado(toado);
     return 0 ;
}
























































































































































































































//


