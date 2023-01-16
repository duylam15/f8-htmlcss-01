#include <iostream>
#include <math.h>
using namespace std;

struct DIEM
{
    float x, y;
};

int nhap(DIEM a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cin>>a[i].x>>a[i].y;
    }
}

int gocphantu(DIEM a)
{
    if(a.x>0 && a.y>0) return 1;
    else if(a.x<0 && a.y>0) return 2;
    else if(a.x<0 && a.y<0) return 3;
    else return 4;
}

int namtrentruc(DIEM a)
{
    if(a.x==0 || a.y==0) return 1;
    return 0;
}

int trentruchoanh(DIEM a)
{
    if(a.y>0) return 1;
    return 0;
}

double khoangcach(DIEM a, DIEM b)
{
    float t=pow((a.x + b.x), 2) + pow((a.y + b.y), 2);
    return sqrt(t);
}

void cc(DIEM a[], int n)
{
    double khoang_cach_min = khoangcach(a[0], a[1]);
    int thutu1=0, thutu2=1;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(khoangcach(a[i], a[j]) < khoang_cach_min)
            {
                khoang_cach_min = khoangcach(a[i], a[j]);
                thutu1 = i+1;
                thutu2 = j+1;
            }   
        }
    }
    cout << "thu tu cua cap diem co khoang cach min la: " << thutu1 << " va " << thutu2;
    cout << "\n khoang cach la: " << khoang_cach_min << endl;
}

int main()
{
    int n;
    cout<<"nhap n ";
    cin>>n;
    DIEM a[n];
    nhap(a, n);
    
    int g1, g2, g3, g4, namtren_truc;
    for(int i=0; i<n; i++)
    {
        if(gocphantu(a[i])==1) g1++;
        else if(gocphantu(a[i])==2) g2++;
        else if(gocphantu(a[i])==3) g3++;
        else g4++;
        if(namtrentruc(a[i])==1) namtren_truc++;
    }
    cout<<"so diem o goc 1 la "<<g1<<endl;
    cout<<"so diem o goc 2 la "<<g2<<endl;
    cout<<"so diem o goc 3 la "<<g3<<endl;
    cout<<"so diem o goc 4 la "<<g4<<endl;
    cout<<"so diem o tren truc la "<<namtren_truc<<endl;



    DIEM max;
    for(int i=0; i<n; i++)
    {
        if(trentruchoanh(a[i])==1)
        {
            max=a[i];
            break;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(trentruchoanh(a[i]) && a[i].x > max.x)   max=a[i];
    }
    cout<<"diem co hoanh do lon nhat la "<<max.x<<" "<<max.y<<endl;

    float khoangcachmin=khoangcach(a[0], a[1]);
    int thutu1, thutu2;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1;j<n; j++)
        {
            if(khoangcach(a[i], a[j])<khoangcachmin) khoangcachmin=khoangcach(a[i], a[j]);
            thutu1=i+1;
            thutu2=j+1;
        }
    }

    cout<<"thu tu 2 cap diem gan nhat "<<thutu1<< " "<<thutu2<<endl;
    cout<<"khoang cach 2 diem do "<<khoangcachmin<<endl;


    int tren=0, duoi=0, thuoc=0;
    for(int i=0; i<n; i++)
    {
        if((3*a[i].x + 4*a[i].y +1)>0) tren++;
        else if((3*a[i].x + 4*a[i].y +1)>0) duoi++;
        else thuoc++;
    }

    cout<<"so diem nam tren phuong trinh la "<<tren<<endl;
    cout<<"so diem nam duoi phuong trinh la "<<duoi<<endl;
    cout<<"so diem thuoc phuong trinh la "<<thuoc;

    cc(a, n);


















return 0;
}



















//