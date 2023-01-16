#include <iostream>
#include <math.h>
#include <string.h>
#include <iomanip>
using namespace std;

//Viết chương trình in ra tất cả các số nguyên tố nhỏ hơn số nguyên dương M cho trước (M nhập từ bàn phím).
    // int ktsnt(int n){
    //     if(n<=1) return 0;
    //     for(int i =2; i<n; i++){
    //         if(n%i==0) return 0;
    //     }
    //     return 1;
    // }
    // int main(){
    //     int n;
    //     cin>>n;
    //     for(int j=2; j<=n; j++){       
    //         if(ktsnt(j)==1){
    //             cout<<j<<endl;
    //         }
    //     }
    //     return 0;
    // }
    
//Viết hàm kiểm tra một số nguyên dương có phải là số chính phương hay không. In tất cả các số chính phương trong khoảng (A,B). ( với A, B nhập từ bàn phím)
    // int ktscp(int  n){
    //     int k;
    //     k=sqrt(n);
    //     if(1ll*k*k==n)
    //         return 1;
    //     return 0;
    // }
    // int main(){
    //     int  a, b;
    //     cin>>a>>b;
    //     for(int i=a; i<=b; i++){
    //         if(ktscp(i))
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }
    
//Viết chương trình tìm số đối xứng 
// void inso();
// int sodaonguoc(int n);
// int sodoixung(int n);
// int songuyento(int n);
// void inso()
// {
//     for (int i = 10000 ;i<100000;i++)
//       {
//          if( sodoixung(i) && songuyento(i))
//           cout<<i<<" ";
//       }
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
// int sodoixung(int n)
// {
//     if (sodaonguoc(n) == n)
//       return 1;
//     else return 0;
// }
// int songuyento(int n)
// {
//     if ( n <= 2) return n;
//     for( int i = 2 ; i < n/2;i++)
//     {
//         if(n % i  == 0)
//            return 0;
//     }
//     return 1;
// }
// int main()
// {
//     inso();
//     system("pause");
//     return 0;
// }

// viết chương trình tìm ước chung lớn nhất và bội chung nhỏ nhất của 2 số
// int ucln(int a, int b){
//   
//     for(int i=a+b; i>=2; i--){
//         if(a%i==0 && b%i==0){
//             cout<<"ucln cua a va b la "<<i<<endl;
//             break;
//         }
//     }
//     return b;
// }
// int bcnn(int a, int b){
//
//     for(int j=1; ;j++){
//         if(j%a==0 && j%b==0){
//             cout<<"bcnn cua a va b la "<<j;
//             break;
//         }
//     }
//     return b;
// }
// int main(){
//     int a, b; 
//     cin>>a>>b;
//     if(ucln(a, b) && bcnn(a,b))
//     return 0;
// }

//Chương trình tìm ucln bcnn rút gọn số thập phân và cộng hai số thập phân
// int  ucln(int a, int b){
//     while(a!=b){
//         if(a>b)
//             a=a-b;
//         else
//             b=b-a;
//     }
//     return a;
// }
//
// int bcnn(int a, int b){
//     return (a*b)/ucln(a,b);
// }
//
// void rutgon(int a,int b){
//     int u=ucln(a,b);
//     if(u !=1){
//         a=a/u;
//         b=b/u;
//     }
//     if(a%b==0)
//     cout<<"phan so rut gon la " <<a/b<<endl;
//     else
//     cout<<"phan so rut gon la " <<a<<"/"<<b<<endl;
// }
// void tonghaiphanso(int a,int b,int c,int d)
// {
    //
//     int tuso = a*d + b*c;
//     int mauso = b*d;
//     int u =ucln(tuso, mauso);
//     if(u!=1){
//         tuso=tuso/u;
//         mauso=mauso/u;
//     }
    //
//     if((tuso%mauso)==0)
//      cout<< "tong 2 phan o dang toi gian la : "<<tuso/mauso<<endl;
//     else
//      cout<<"tong 2 phan o dang toi gian la : "<<tuso<<"/"<<mauso<<endl;
// }
//
// int main(){
//     int a, b,c,d, k; 
//     cin>>a>>b>>c>>d;
//     ucln(a,b);
//     bcnn(a,b);
//     rutgon(a,b);
//     tonghaiphanso(a, b, c, d);
//     cout<<ucln(a,b)<<" "<<bcnn(a,b);
//     return 0;
// }

// int ktsnt(int n)
// {
//     if(n<2) return 0;
//     for(int i=2; i<=sqrt(n); i++)
//     {
//         if(n%i==0) return 0;
//     }
//     return 1;
// }
// int main ()
//  {
//     int n, a, b;
//     cin>>n;
//     int i=0, cnt = 0;
//     while(cnt<n)
//     {
//         if(ktsnt(i))
//         {
//             cout<<i<<" ";
//             ++cnt;
//         }
//         ++i;
//     }
//     return 0;
//  }
int main()
{
    float x ;
    float y;
    cin>>x>>y;
    if(x==0 && y==0) cout<<"thuoc goc toa do ";
    else if(x>0)
    {
        if(y>0) cout<<" thuoc phan 1 )";
        else cout<<"thuoc phan 2";
    }
    else if(x<0)
    {
        if(y>0) cout<<"thuoc phan 4";
        else cout<<" thuoc phan 3";
    }









    return 0;
}










  