#include <iostream>
// để mảng phát tạo ra số ngẫu nhiên cần 2 thu viện này
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;

void nhapmang(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
}

void xuatmang(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}

// void tinhtongmang(int a[], int n)
// {
//     int s=0;
//     for(int i=0; i<n; i++)
//     {
//         s+=a[i];
//     }
//     cout<<"tong cua mang la "<< s<<endl;
// }
//
// void incacphantule(int a[], int n)
// {
//     cout<<"cac phan tu le cua mang la ";
//     for(int i=0; i<n; i++)
//     {
//         if(a[i]%2!=0){
//             cout<<a[i]<<" ";
//         }
//     }
//     cout<<endl;
// }
//
// void incacphantuchan(int a[], int n)
// {
//     cout<<"cac phan tu chan cua mang la ";
//     for(int i=0; i<n; i++)
//     {
//         if(a[i]%2==0)
//         {
//             cout<<a[i]<< " ";
//         }
//     }
//     cout<<endl;
// }
//
// void sophantule(int a[], int n)
// {
//     int dem=0;
//     for(int i=0; i<n; i++)
//     {
//         if(a[i]%2!=0)
//         {
//             dem+=1;
//         }
//     }
//     cout<<"so phan tu le la "<<dem<<endl;
// }
//
// void sophantuchan(int a[], int n)
// {
//     int dem=0;
//     for(int i=0; i<n; i++)
//     {
//         if(a[i]%2==0)
//         {
//             dem+=1;
//         }
//     }
//     cout<<"so phan tu chan la " <<dem<<endl;
// }
//
// void tongsole(int a[], int n)
// {
//     int s=0;
//     for(int i=0; i<n; i++)
//     {
//         if(a[i]%2!=0)
//         {
//             s=s+a[i];
//         }
//     }
//     cout<<"tong so le la "<<s<<endl;
// }
//
// void tongsochan(int a[], int n)
// {
//     int s=0;
//     for(int i=0; i<n; i++)
//     {
//         if(a[i]%2==0)
//         {
//             s=s+a[i];
//         }
//     }
//     cout<< "tong so chan la "<<s<<endl;
// }
//
// int main()
// {
//     int n;
//     cout<<"nhap so phan tu trong mang ";
//     cin>>n;
//     int a[n];
//     nhapmang(a, n);
//     tinhtongmang(a, n);
//     incacphantule(a, n);
//     incacphantuchan(a, n);
//     sophantuchan(a, n);
//     sophantule(a, n);
//     tongsochan(a, n);
//     tongsole(a, n);
//     system("pause");
//     return 0;
// }

// int ktsnt(int n){
//         if(n<=1) return 0;
//         for(int i =2; i<n; i++){
//             if(n%i==0) return 0;
//         }
//         return 1;
//
// }
// void insonguyento(int a[], int n)
// {   
//     cout<<"cac so nguyen  to la ";
//     for(int i=0; i<n; i++)
//     {
//         if(ktsnt(a[i])==1){
//             cout<<a[i]<<endl;
//         }
//     }
// }
// int main()
// {
//     int n;
//     int a[n];
//     cin>>n;
//     nhapmang(a, n);
//     ktsnt(n);
//     insonguyento(a, n);
//     return 0;
// }

// int timkiem(int a[], int n, int x)
// {
//     for(int i=0; i<n; i++)
//     {
//         if(a[i]==x) return 1;
//     }
//     return 0;
// }
// int main()
// {
//     int n;
//     int x;
//     int a[n];
//     cin>>n;
//     nhapmang(a, n);
//     cin>>x;
//     if(timkiem(a, n, x)==1) cout <<" co trong mang ";
//     else cout<<"khong co";
//     return 0;
// }

// int ktsnt( int n)
// {
//     if(n <2) return 0;
//     for(int i=2; i<n; i++)
//     {
//         if(n%i==0) return 0;
//     }
//     return 1;
// }
// void demsnt(int a[], int n)
// {
//     int dem=0;
//     for(int i=0; i<n; i++)
//     {
//         if(ktsnt(a[i])==1)
//         {
//             ++dem;
//         }
//     }
//     if(dem==n)
//     {
//         cout<<"tat ca so la snt ";
//     }
//     else cout<<"co so khong la so nguyen to ";
// }
// int main() 
// {
//     int n;
//     int a[n];
//     cin>>n;
//     nhapmang(a, n);
//     demsnt(a, n);
//     return 0;
// }

// void xuatmang(int a[], int n)
// {
//     cout<<"mang la ";
//     for(int i=0; i<n; i++)
//     {
//         cout<<a[i]<<" ";
//     }
// }
// void tachmang(int a[], int n)
// {
//     int b[100];
//     int c[100];
//     int k=0, l=0; 
//     for (int i=0; i<n; i++)
//     {
//         if(a[i]%2==0)
//         {
//             b[k]=a[i];
//             k++;
//         }
//         if(a[i]%2!=0)
//         {
//             c[l]=a[i];
//             l++;
//         }
//     }
//     xuatmang(b, k);
//     cout<<endl;
//     xuatmang(c, l);
// }
// int main() 
// {
//     int n;
//     int a[n];
//     cin>>n;
//     nhapmang(a, n);
//     xuatmang(a, n);
//     tachmang(a, n);
//     return 0;
// }

// void chenmang(int a[], int n)
// {
//     int index, x;
//     cout<<"nhap so vi tri can chen ";
//     cin>>index;
//     cout<<"nhap so can chen ";
//     cin>>x;
//     n+=1;
//     for(int i=n-1; i>index; i--)
//     {
//         a[i]=a[i-1];
//     }
//     a[index]=x;
//     xuatmang(a, n);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     nhapmang(a, n);
//     chenmang(a, n);
//     return 0;
// }

// void timx(int a[], int n)
// {
//     int x;
//     cout<<"nhap x ";
//     cin>>x;
//     for(int i=0; i<n; i++)
//     {
//         if(a[i]==x)
//         {
//             cout<<"x co trong mang ";
//             break;
//         }
//         else {
//             cout<<"x khong co trong mang ";
//             break;
//         }
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     nhapmang(a, n);
//     timx(a, n);
//     return 0;
// }

// void max(int a[], int n)
// {
//     int max=a[0]; 
//     int min=a[0];
//     for(int i=0; i<n; i++)
//     {
//         if(a[i]<min){
//             min=a[i];
//         }
//         if(a[i]>max){
//             max=a[i];
//         }
//     }
//     cout<<max << " " << min;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     nhapmang(a, n);
//     max(a, n);
//     return 0;
// }

// int max(int a[], int n)
// {
//     int max=a[0];
//     for (int i=0; i<n; i++)
//     {
//         if(max<a[i])
//         max=a[i];
//     }
//     return max;
// }
// int min(int a[], int n)
// {
//     int min=a[0];
//     for (int i=0; i<n; i++)
//     {
//         if(min>a[i])
//         min=a[i];
//     }
//     return min;
// }
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     nhapmang(a, n);
//     cout<<max(a, n)<<endl;
//     cout<<min(a, n);
//     return 0;
// }

// void sapxeptangdan(int a[], int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         for(int j=i+1; j<n; j++)
//         {
//             if(a[i]>a[j]){
//                 int t=a[i];
//                 a[i]=a[j];
//                 a[j]=t;
//             }
//         }
//     }
// }
void sapxepgiamdan(int a[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j]){
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
}
int main()
{
    int n; cin>>n; int a[n];
    nhapmang(a, n);
    sapxepgiamdan(a, n);
    xuatmang(a, n);cout <<endl;
    return 0;
}

// void chenmang(int a[], int &n, int vitri, int sochen )
// {
//     for(int i=n; i>vitri; i--)
//     {
//         a[i]=a[i-1];
//     }
//     a[vitri]=a[sochen];
//     n++;
// }
// int main(){
//     int n;
//     cin>>n;
//     int a[n]; 
//     nhapmang(a, n);
//     int sochen, vitri;
//     cin>>vitri>>sochen; 
//     chenmang(a, n, vitri, sochen);
//     xuatmang(a, n);
//     return 0;
// }

// void xoamang(int a[], int &n, int vitri)
// {
//     for(int i=vitri; i<n; i++){
//         a[i]=a[i+1];}
//     n--;
// }
// void xoasochan(int a[], int &n)
// {
//     for(int i=0; i<n;)
//     {
//         if(a[i]%2==0)
//         {
//             xoamang(a, n, i);
//         }
//         else 
//         {
//             i++;
//         }
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     nhapmang(a, n);
//     int vitri;
//     xoasochan(a, n);
//     xuatmang(a, n);
//     return 0;
// }

// void demsoduong(int a[], int n)
// {
//     int dem=0;
//     for(int i=0; i<n; i++)
//     {
//         if(a[i]>0){
//             dem++;
//         }
//     }
//     cout<<"mang co "<<dem<<" so nguyen duong"<<endl;
// }
// 
// void tinhtongsoduong(int a[], int n)
// {
//     int tong =0;
//     for(int i=0; i<n; i++)
//     {
//         if(a[i]>0)
//         {
//             tong+=a[i];
//         }
//     }
//     cout<<"tong la "<<tong<<endl;
// }
// 
// int songuyento(int n)
// {
//     if(n<2) return 0;
//     for(int i=2; i<n; i++)
//     {
//         if(n%i==0) return 0;
//     }
//     return 1;
// }
// 
// void demsnt(int a[], int n)
// {
//     int dem=0;
//     int tong=0;
//     for(int i=0; i<n; i++)
//     {
//         if(songuyento(a[i])==1)
//         {
//             dem++;
//             tong+=a[i];
//         }
//     }
//     cout<<"co "<<dem<< " so nguyen to"<<endl;
//     cout<<"tong cac so nguyen to la " << tong<<endl;
// }
// 
// int sochinhphuong(int n)
// {
//     int k;
//     k=sqrt(n);
//     if(1ll*k*k==n) return 1;
//     return 0;
// }
// 
// void demsochinhphuong(int a[], int n)
// {
//     int dem=0;
//     int tong=0;
//     for(int i=0; i<n; i++)
//     {
//         if(sochinhphuong(a[i])==1)
//         {
//             dem++;
//             tong+=a[i];
//         }
//     }
//     cout<<"co "<<dem<< " so chinh phuong ";
//     cout<<"tong cac so chinh phuong la " << tong<<endl;
// }
// 
// void timmax(int a[], int n)
// {
//     int max=a[0];
//     for(int i=1; i<n; i++)
//     {
//         if(max<a[i]){
//             max=a[i];
//         }
//     }
//     cout<<"so lon nhat trong mang la "<<max<<endl;
// }
// 
// void timmin(int a[], int n)
// {
//     int min=a[0];
//     for(int i=1; i<n; i++)
//     {
//         if(min>a[i]){
//             min=a[i];
//         }
//     }
//     cout<<"so lon nhat trong mang la "<<min<<endl;
// }
// 
// void timsntlonnhat(int a[], int n)
// {
//     int max=songuyento(a[0]);
//     for(int i=1; i<n; i++)
//     {
//         if(songuyento(a[i])>max)
//         {
//             max=songuyento(a[i]);
//         }
//     }
//     cout<<"so nguyen to lon nhat la "<<max<<endl;
// }
// 
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     nhapmang(a, n);
//     demsoduong(a, n);
//     tinhtongsoduong(a, n);
//     demsnt(a, n);
//     demsochinhphuong(a, n);
//     timmax(a, n);
//     timmin(a, n);
//     timsntlonnhat(a, n);
//     return 0;
// }

// void xoa(int a[], int &n, int vitri)
// {
//   for(int i=vitri; i<n; i++)
//   {
//     a[i-1]=a[i];
//   }
//   n--;  
// }
//
// void xoaphantutrung(int a[], int &n)
// {
//   for(int i=0; i<n; i++)
//   {
//     for(int j=i+1; j<n; j++)
//     {
//       if(a[i]==a[j])
//       {
//         xoa(a, n, j);
//         i--;
//       }
//     }
//   }
// }
//
// int main()
// {
//   int n, vitri;
//   cin>>n;
//   int a[n];
//   nhapmang(a, n);
//
//   xoaphantutrung(a, n);
//   xuatmang(a, n);
//   return 0;
// }

// void hoanvi(int &a, int &b)
// {
//   int temp=a;
//   a=b;
//   b=temp;
// }
// void sapxeptang(int a[], int n)
// { 
//   for(int i=0; i<n; i++)
//   {
//     for(int j=i+1; j<n; j++)
//     {
//       if(a[i]>a[j])
//       {
//         hoanvi(a[i], a[j]);
//       }
//     }
//   }
// }
// int main()
// {
//   int n, vitri;
//   cin>>n;
//   int a[n];
//   nhapmang(a, n);
//   sapxeptang(a, n);
//   xuatmang(a, n);
//   return 0;
// }

// void dem(int a[], int n)
// {
     
//         int max=a[0];
//     for(int i=0; i<n; i++)
//     {
//        int dem=0;
//         for(int j=0; j<n; j++)
//         {
//             if(a[i]==a[j])
//             {
//                 if(i<=j)
//                 {
//                     dem++;
//                 }
//                 else break;
//             }
//             if(max<a[i])
//             {
//                 max=a[i];
//             }
//         }
//         if(dem!=0) cout<<"gia tri "<<a[i]<<"co tan so la "<<dem<<endl;
//     }
//     cout<<max;
// }

// int main()
// {
//     int n;
//     cin  >> n;
//     int a[n];
//     nhapmang(a, n);
//     dem(a, n);
//     return 0;
// }



































//
































































































//