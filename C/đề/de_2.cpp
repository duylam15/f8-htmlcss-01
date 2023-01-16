#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b, c, d, e, f;
    float x, y;
    cout<<"nhap he so phuong trinh 1 ";
    cin>>a>> b>> c;
    cout<<"nhap he so phuong trinh 2 ";
    cin>>d>>e>>f;
    float det, dx, dy;
    det=a*e-b*d;
    if(det!=0)
    {
        dx=c*e-b*f;
        dy=a*f-c*d;
        x=dx/det;
        y=dy/det;
        cout<<"nghiem cua he phuong trinh la : "<<x<<" "<<y;
    }
    else cout<<"pt vo nghiem ";
    return 0;

}






























































































//