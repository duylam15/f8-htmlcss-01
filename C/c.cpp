#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>
using namespace std;

struct phanso
{
	int tu; 
	int mau;
};

void nhapphanso(phanso &a)
{
	cout<<"nhap tu so ";
	cin>>a.tu;
	cout<<"nhap mau so ";
	cin>>a.mau;
}

void xuatphanso(phanso a)
{
	cout<<"phan so la ";
	cout<<a.tu<<"/"<<a.mau;
}

void nhapnhieups(phanso a[], int n)
{
	cout<<endl;
	for(int i=0; i<n; i++)
	{
		nhapphanso(a[i]);
	}
}
void xuatnhieups(phanso a[], int n)
{
	cout<<endl;
	for(int i=0; i<n; i++)
	{
		 xuatphanso(a[i]);
		 cout<<endl;
	}
}

int ucln(int a, int b)
{
	for(int i=a+b; i>1; i--)
	{
		if(a%i==0 && b%i==0)
		return i;
	}
	return 0;
}

void rutgon(phanso a)
{
	int u=ucln(a.tu, a.mau);
	if(ucln(a.tu, a.mau)) cout<<"phan so rut gon la "<<(float)a.tu/u<<"/"<<(float)a.mau/u;
	else cout<<"phan so rut gon la "<<a.tu<<"/"<<a.mau;
}

void tongphanso(phanso a[], int n)
{

	int tu =0, mau=1;
	tu= a[0].tu*a[1].mau + a[1].tu*a[0].mau;
	mau=a[0].mau * a[1].mau;
	int u=ucln(tu, mau);
	cout<<" tong 2 ps la "<<(float)tu/u<<"/"<<(float)mau/u<<endl;
}

void hieuphanso(phanso a[], int n)
{
	int tu =0, mau=1;
	tu= a[0].tu*a[1].mau - a[1].tu*a[0].mau;
	mau=a[0].mau * a[1].mau;
	int u=ucln(tu, mau);
	cout<<" hieu 2 ps la "<<(float)tu/u<<"/"<<(float)mau/u<<endl;
}

void tichphanso(phanso a[], int n)
{
	int tu =1, mau=1;
	tu=a[0].tu * a[1].tu;
	mau=a[0].mau * a[1].mau;
	int u=ucln(tu, mau);
	cout<<"tich 2 ps la "<<(float)tu/u<<"/"<<(float)mau/u<<endl;
}

void thuongphanso(phanso a[], int n)
{
	int tu=1; int mau=1;
	tu=a[0].tu * a[1].mau;
	mau=a[0].mau * a[1].tu;
	int u=ucln(tu, mau);
	cout<<"thuong 2 ps la "<<(float)tu/u<<"/"<<(float)mau/u<<endl;
}

int uocchung(int a, int b)
{
	for(int i=1; i=a+b; i++)
	{
		if(a%i==0&&b&i==0)
		return i;
	}
	return 0;
}

 kiemtratoigian(int a, int b)
{
	int u=uocchung(a, b);
	if(a%u==0 && b%u==0 ) cout<<"ps chua tg ";
	else cout<<"ps da toi gian ";
}

int main()
{
	phanso a;
	int n;
	cout<<"nhap so phan so ";
	cin>>n;
	phanso b[n];
	nhapnhieups(b, n);
	tongphanso(b, n);
	hieuphanso(b, n);
	tichphanso(b, n);
	thuongphanso(b, n);
	return 0;
}


















































































//