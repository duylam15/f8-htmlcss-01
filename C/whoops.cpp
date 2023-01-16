#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

struct toado
{
    float x, y;
};

void nhaptoado(toado &a)
{
    cin>>a.x;
    cin>>a.y;
}

void nhapnhieutoado(toado a[], int n)
{
    for(int i=0; i<n; i++)
    {
        nhaptoado(a[i]);
    }
}

void xuattoado(toado a)
{
    cout<<"("<<a.x<<"."<<a.y<<") ";
   
}

void xuatnhieutoado(toado a[], int n)
{
    for(int i=0; i<n; i++)
    {
        xuattoado(a[i]);
    }
}
void dem(toado a[], int n)
{
    int dem=0;
    for(int i=0; i<n; i++)
    {
        if(a[i].x>0 && a[i].y<0)
        dem++;
    }
    cout<<"co "<<dem<<" diem thuoc ve moi goc phan tu ";
}

void max(toado a[], int n)
{
    int max=0;
    for(int i=0; i<n; i++)
    {
        if(a[i].x>max)
        {
            max=a[i].x;
        }
    }
    cout<<max;
}

void diemgannhau(toado a[], int n)
{
   
}

int  khoangcach2diem(toado a, toado b)
{
    float t=(float)sqrt((pow((a.x + b.x) ,2)+ pow((a.y + b.y),2)));
    return t;
}

void kcngan(toado a[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; i<n;j++)
        {
            float u=(float)khoangcach2diem(a[i], a[j]);
            if(u)
        }
    }
}

int main()
{
    int n;
    cin>>n;
    toado a[n];
    nhapnhieutoado(a, n);
    xuatnhieutoado(a, n);
    cout<<endl;
    max(a, n);
    return 0;
}














































































































//