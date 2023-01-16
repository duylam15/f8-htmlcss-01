#include <iostream>

using namespace std;

void nhapmang(int a[][100], int &n, int &m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++){
            cout<<"a["<<i<<"]["<<j<<"]= ";
            cin>>a[i][j];
        }
    }
}

void xuatmang(int a[][100], int n, int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++){
            cout<<a[i][j]<<" ";
            
        }
        cout<<endl;
    }
}

// int timkiem(int a[][100], int n, int m, int x)
// {
//     int kq=0;
//     cout<<"nhap so can tim ";
//     cin>>x;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<m; j++)
//         {
//             if(a[i][j]==x){
//                 kq=1;
//             }     
//         }
//     }
//     return kq;
// }
// int main(){
//     int n, m, x;
//     cin>>n>>m;
//     int a[100][100];
//     nhapmang(a, n, m);
//     xuatmang(a, n, m);
//     if(timkiem(a, n, m, x)){
//         cout <<"co x trong mang ";
//     }
//     else cout<<"ko co ";
//     return 0;
// }

// int snt(int n)
// {
//     if(n<2) return 0;
//     for(int i = 2; i<n; i++)
//     {
//         if(n%i==0) return 0;
//     }
//     return 1;
// }
// void sochan(int a[][100], int n, int m)
// {
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<m; j++){
//             if(a[i][j]%2==0)
//             {
//                 cout << a[i][j]<<" ";
//             }
//         }
//     }
// }
// void insnt(int a[][100], int n, int m)
// {
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<m; j++){
//             if(snt(a[i][j]))
//             {
//                 cout << a[i][j]<<" ";
//             }      
//         }  
//     }
// }
// int main(){
//     int n, m, x;
//     cin>>n>>m;
//     int a[100][100];
//     nhapmang(a, n, m);
//     xuatmang(a, n, m);
//     sochan(a, n, m);
//     insnt(a, n, m);
//     return 0;
// }

//  int snt(int n)
// {
//     if(n<2) return 0;
//     for(int i = 2; i<n; i++)
//     {
//         if(n%i==0) return 0;
//     }
//     return 1;
// }
// int demsnt (int a[][100], int n, int m)
// {   int dem=0;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<m; j++)
//         {
//             if(snt(a[i][j])){
//                 dem++;
//             }
//         }
//     }
//     return dem;
// }
// int main()
// {
//     int n, m, x;
//     cin>>n>>m;
//     int a[100][100];
//     nhapmang(a, n, m);
//     xuatmang(a, n, m);
//     if(demsnt(a, n, m)==m*n)
//     {
//         cout<<"dung ";
//     }
//     else cout<<"sai " ;
//     return 0;
// }

// int tongdong(int a[][100], int n, int m, int d)
// {
//     int tong=0; 
//     for(int i=0; i<n; i++)
//     {
//         tong = tong + a[d][i];
//     }
//     return tong;
// }
// int tongcot(int a[][100], int n, int m, int c)
// {
//     int tong=0; 
//     for(int i=0; i<n; i++)
//     {
//         tong = tong + a[i][c];
//     }
//     return tong;
// }
// int tong(int a[][100], int n, int m)
// {
//     int tong=0; 
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<m; j++){
//             tong = tong + a[i][j];
//         }
//     }
//     return tong;
// }
// int main()
// {
//     int n, m, d, c;
//     cin>>n>>m;
//     int a[100][100];
//     nhapmang(a, n, m);
//     xuatmang(a, n, m);
//     cout<<"nhap dong muon tinh tong ";
//     cin>>d;
//     cout<<tongdong(a, n, m, d);
//     cout<<"nhap cot muon tinh tong ";
//     cin>>c;
//     cout<<tongcot(a, n, m, c);
//     cout<<tong(a, n, m);
//     return 0;
// }










































































//