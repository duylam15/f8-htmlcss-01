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

void tansuat(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        int dem=0;
        for(int j=0; j<n; j++)
        {
            if(a[i]==a[j]){
            if (i<=j)
            {
                dem++;
            }
            else break;
        }}
        if(dem!=0)
        cout<<a[i]<<" co tan suat la"<<dem<<endl;
    }
}


int main(){
    int n;
    cin>>n;
    int a[n];
    nhapmang (a, n);
    tansuat(a, n);
    return 0;
}