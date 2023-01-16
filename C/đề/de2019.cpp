#include <iostream>
#include <math.h>
using namespace std;

// int main()
// {
//     int n, h, m, s;
//     cin>>n;
//     if (n>0)
//     {
//         h=(float)n/3600;
//         m=(float)(n-h*3600)/60;
//         s=(float)(n-h*3600-m*60);
//     }
//     cout<<h<<" "<<m<<" "<<s;
//     return 0;
// }


// int ktsnt(int n)
// {
//     if(n<2) return 0;
//     for(int i=2; i<sqrt(n); i++)
//     {
//         if(n%i==0) return 0;
//     }
//     return 1;
// }
// int sodaonguoc(int n)
// {
//     int sdn = 0;
//     while (n!=0)
//     {
//         sdn = sdn*10 + n%10;
//         n=n/10;
//     }
//     return sdn;
// }
// int songhichdao(int n)
// {
//     if(sodaonguoc(n)==n)
//     return 1;
//     else return 0;
// }
// void xuatso()
// {
//     for(int i=10000; i<100000; i++)
//     {
//         if(songhichdao(i) && ktsnt(i))
//         cout<<i<<" ";
//     }
// }
// int main()
// {
//     int n;
//     xuatso();
//     return 0;
// }


// int SoNguyenTo(int n)
// {
//      if (n<=1)
//          return 0;
//      for (int i=2; i<n; i++)
//          if(n%i==0)
//              return 0;
//      return 1;
// }
// int NguyenToLonNhat(int a[],int n)
// {
//     int dem=0;
//     int max;
//     for(int i=0; i<n; i++)
//     {
//         if(SoNguyenTo(a[i])==1)
//         {
//             dem ++;
//             max = a[i];
//             break;
//         }
//     }
//     if (dem ==0)
//         return 0;
//     for (int i=0; i<n; i++)
//     {
//         if ((SoNguyenTo(a[i])==1) && (max<a[i]))
//         {
//             max = a[i];
//         }
//     }
//     return max;
// }
// void nhapmang(int a[], int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         cin>>a[i];
//     }
// }
// int tongpt(int n)
// {
//     int t=0;
//     while(n!=0)
//     {
//         t+=n%10;
//         n/=10;
//     }
//     return t;
// }
// void tongmang(int a[], int n)
// {
//     int tong=0;
//     for(int i=0; i<n; i++)
//     {
//         tong = tong + tongpt(a[i]);
//     }
//     cout<<tong;
// }
// int main ()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     nhapmang(a, n);
//     if(NguyenToLonNhat(a, n)) cout<< NguyenToLonNhat(a, n);
//     tongmang(a, n);
//     return 0;
// }






























































































































































































//