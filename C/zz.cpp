#include <iostream>
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

int hoanvi(int a, int b)
{
    int  t=a;
    a=b;
    b=t;
}

void sapxep(int a[], int n)
{
    
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]<a[j])
            {
                int tam=a[i];
                a[i]=a[j];
                a[j]=tam;
            }
        }
    }
}

void thempt(int a[], int &n, int vt, int x)
{
    for(int i=n-1; i>=vt; i++)
    {
        a[i+1]=a[i];
    }
    a[vt]=x;
    n++;
}

void xoapt(int a[], int &n, int vt)
{
    for(int i=vt+1; i<n; i++)
    {
        a[i-1]=a[i];
    }
    n--;
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    nhapmang(a, n);
    sapxep(a, n);
    xuatmang(a, n);
    return 0;
}