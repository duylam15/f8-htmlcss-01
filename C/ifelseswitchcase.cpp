#include <iostream>
#include <math.h>
#include <string.h>
#include <iomanip>
using namespace std;
int main()
{
// Phuont trinh bac 2
//     int a, b, c;
//     cin>>a>>b>>c;
//     int d=b*b-4*a*c;
//     float x1, x2;
//     if(a==0){
//         if(b==0){
//             if(c!=0)
//             cout<<"pt vo nghiem ";
//             else
//             cout<<"pt vo so nghiem ";
//         }
//         else {cout<<"pt co nghiem la "<< (float) -c/b;}
//         return 0;
//     }
//     if(d>0){
//         float x1=(float) (-b+sqrt(d))/(2*a);
//         float x2=(float) (-b-sqrt(d))/(2*a);
//         cout<< "phuong trinh co hai nghiem la x1 = "<<x1<<" x2 = " <<x2;
//     }
//     else if (d==0){
//         float kep=(float) (-b)/2*a;
//         cout<<"phuong trinh co nghiem kep = " <<kep;
//     }
//     else 
//         cout<<"phuong trinh vo nghiem " ;

// Chuyen ki tu in thuong thanh in hoa va nguoc lai
//     char a;
//     cin>>a;
//     if( (a >= 'A') && (a <= 'Z') ){
//         int k=(int) a+32;
//         cout<<" ki tu in thuong cua "<<a<< " la : "<<(char) k;
//     }
//     else if( ( a>='a') && (a<='z') ){
//         int k=(int) a - 32;
//         cout<<" ki tu in hoa cua "<<a << " la " << (char) k;
//     }
//     else cout<<" number " <<a;
//     cout<<endl;

// Tim so lon nhat va nho nhat trong 4 so nguyen a b c d vua nhap   
//     int a, b, c ,d;
//     cin>> a >> b >> c >> d;
//     int max=a;
//     if (a<b){
//         max=b;
//     }
//     if (b<c){
//         max=c;
//     }
//     if(c<d){
//         max=d;
//     }
//     int min=a;
//     if (a>b){
//         min=b;
//     }
//     if (b>c){
//         min=c;
//     }
//     if(c>d){
//         min=d;
//     }
//     cout<<max<< " " <<min;
   
// Nhập 4 số nguyên a, b, c và d. Hãy sắp xếp giá trị của 4 số nguyên này theo thứ tự tăng dần.
//     int a, b, c, d, s1, s2, s3, s4;
//     cin>>a>>b>>c>>d;
//     if(a<b)
//         s1=a; s2=b;
//     if(c<d)
//         s3=c; s4=d;
//     if(b<c)
//         s2

// Nhập vào tháng và năm. Cho biết tháng đó có bao nhiêu ngày. 
//     int t, n;
//     cin>>t>>n;
//     switch (t)
//     {
//     case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//         cout << t<<"co 31 ngay";
//     break;
//     case 4: case 6: case 9: case 11:
//         cout<<t<<"co 30 ngay ";
//     case 2:
//         if (n%400==0 || n%4==0 && n%4!=0 )
//         cout<<t<<"co 29 ngay";
//         else 
//         cout<< t << "co 29 ngay";
//     default:
//         break;
//     }

// Nhập độ dài 3 cạnh 1 tam giác. Kiểm tra đó có phải là tam giác không và là tam giác gì?
//     int a, b, c;
//     cin>> a >>b >> c;
//     if(a>0 && b>0 && c>0){
//         if(a==b && a==c){
//             cout<<"la tam giac deu";
//         }
//         else if( a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a){
//             cout<<"la tam giac vuong ";
//         }
//         else if (a==b || a==c || b==c){
//             cout<<"la tam giac can";
//         }
//         else {
//         cout<<"la tam giac thuong ";}
//     }
//     else 
//     cout<<"khong phai tam giac";

// Nhập vào số nguyên dương n và tính các tổng sau:
//
//     int n;
//     int tong= 0;
//     cin>>n;
//     for(int i=0;i<=n;i++){
//         tong +=(i*i*i);
//     }
//     cout<<tong;
//
//     int n;
//     int tong= 0;
//     cin>>n;
//     for(int i=0;i<=n;i++){
//         tong +=(i*i);
//     }
//     cout<<tong;
//
//     int n;
//     float tong=0;
//     cin>>n;
//     for( int i=1; i<=n;i++){
//         tong= (float) tong+(1.0/i);
//     }
//     cout<<fixed<<setprecision(2)<<tong;
//
//     int n;
//     float tong=0;
//     cin>>n;
//     for( int i=1; i<=n;i++){
//         tong= (float) tong+(1.0/(i*(i+1)));
//     }
//     cout<<fixed<<setprecision(2)<<tong;
//
//     int n;
//     long long tong=0;
//     int tich=1;
//     cin>>n;
//     for (int i=1 ; i<=n; i++){
//         tich*=i;
//         tong+=tich;
//     }
//     cout<<tong;

//In ra tất cả các số nguyên tố nhỏ hơn n ( với n là số nguyên dương nhập từ bàn phím)
//    int n;
//    cin>>n;
//    if(n<=1){
//     cout<<"khong phai la so nguyen to";
//    }
//    else{
//     for(int i=2;i<=sqrt(n); i++){
//         if(n%i==0){
//             return 0;
//         }
//         else {
//             cout<<i<<endl;
//         }
//     }
//    }

// Nhập vào số nguyên dương n và số thực x
    // int n;
    // float x, s=0,  mau=0;
    // cin>>n>>x;
    // for(int i=1; i<=n; i++){
    //     int tu=pow(x,i);
    //     mau =mau+i;
    //     s+=(float)tu/mau;
    // }
    // cout <<s;
    // int n, ta, sa, sb, tb ;
    // cin>>n;
    // for(int i=0; i<=n; i++){
    //     ta=i*(i+1)*(i+2);
    //     sa+=ta;
    // }
    // cout<<sa;
    // int n, sb=0, tb=0;
    // cin>>n;
    // for(int i=0; i<=n; i++){
    //     tb+=2*i;
    //     sb+=tb;
    // }
    // cout<<sb<<endl;
//Viết chương trình tìm USCLN (ước số chung lớn nhất), BSCNN (bội số chung nho? nhất) của 2 số nguyên dương a và b.
    // int a,b, max, ucln, c,d, min, bcnn;
    // cout << "Nhap so a va b: ";
    // cin >> a>>b;
    // cout << " uoc chung lon nhat cua so a va b "  << " la ";
    // if(a<b){
    //     max=a;
    // }
    // else {
    //     max=b;
    // }
    // for(int i = 1; i <= max; i++) {
    //     if(a % i == 0 && b % i==0) {
    //         ucln=i;
    //     }
    // }
    // cout<<ucln<<endl;
    // cout<<" nhap so 2 so: ";
    // cin>>c>>d;
    // if(c<d){
    //     min=d;
    // }
    // else {
    //     min=c;
    // }
    // for(int i=min; i<=c*d; i+=min){
    //     if(i%c==0 && i%d==0) {
    //         bcnn=i;
    //         break;
    //     }
    // }
    // cout<<"boi chung nho nhat la "<<bcnn;

//Viết chương trình nhập vào N rồi tính giai thừa của N.
    // int n, tich=1;
    // cin>>n;
    // for (int i=1; i<=n; i++){
    //     tich*=i;
    // }
    // cout<<tich;
    
 
    
    
    














    return 0;
}