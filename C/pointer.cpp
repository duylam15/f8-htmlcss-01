#include <iostream>
#include <math.h>
using namespace std;

// int main()
// {
//     int a = 10;
//     int *p;  // khai báo con trỏ ( con trỏ là 1 biến địa chỉ)
//     p=&a;   // gán con trỏ = địa chỉ ( do con trỏ là biến địa chỉ nên chỉ gán được với địa chỉ ( & ))
//     *p += 1;    // cộng giá trị của p thêm 1 (cộng giá trị tại địa chỉ của a them 1)
//     cout<<"gia tri cua a "<<a<<endl;    // 11
//     cout<<"dia chi cua a "<<&a<<endl;   // 0x19f2fff9bc
//     cout<<"gia tri cua p "<<p<<endl;    // 0x19f2fff9bc
//     cout<<"dia chi cua p "<<&p<<endl;   // 0x19f2fff9c0
//     cout<<"gia tri cua p tai dia chi cua a "<<*p<<endl; // 11
//     cout<<"gia tri tai dia chi cua a "<<*&a<<endl; //11
//     // 1 con trỏ có thể thao tác trên nhiều biến ( trỏ đến nhiều biên )
//     int b=20;
//     p=&b;
//     *p +=5;
//     cout<<"gia tri cua b "<<b<<endl;
//     cout<<"dia chi cua b "<<&b<<endl;
//     cout<<"gia tri cua p "<<p<<endl;
//     cout<<"dia chi cua p "<<&p<<endl;
//     cout<<"gia tri cua p tai dia chi cua b "<<*p<<endl;
//     cout<<"gia tri tai dia chi cua b "<<*&b<<endl;
//     return 0;
// }

// void hoandoi(int *a, int *b)
// {
//     int t;
//     t=*a;
//     *a=*b;
//     *b=t;
// }
// int main()
// {
//     int a, b;
//     cin>>a>>b;
//     hoandoi(&a, &b);
//     cout<<a<<endl;
//     cout<<b;
//     return 0;
// }
void nhap(int *&a, int &n)
{
    cout<<"nhap so phan tu cua mang "; 
    cin>>n;
    a=new int [n];
    for (int i=0; i<n; i++)
    {
        cin>>*(a+i);
    }
}

void xuat(int *a, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<*(a+i)<<" ";  
    }
}

int tong(int *a, int n)
{
    int tong = 0;
    for(int i=0; i <n; i++)
    {
        tong+=a[i];
    }
    cout<<tong;
}
int main()
{
    int *a,n;
    nhap(a, n);
    xuat(a, n);
    tong(a, n);
    return 0;
}









































































































































//
