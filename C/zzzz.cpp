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

double khoang_cach_min = khoang_cach(a[0], a[1]);
    int thutu1=0, thutu2=1;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(khoang_cach(a[i], a[j]) < khoang_cach_min)
            {
                khoang_cach_min = khoang_cach(a[i], a[j]);
                thutu1 = i+1;
                thutu2 = j+1;
            }   
        }
    }
    cout << "thu tu cua cap diem co khoang cach min la: " << thutu1 << " va " << thutu2;
    cout << "\n khoang cach la: " << khoang_cach_min << endl;


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

int dequy(int n)
{
    if(n==1)
    {
        return n;
    }
    return dequy(n-1) + n%10;
}

void sapxep(doanhnghiep a[], int n)
{
    doanhnghiep tg;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n;  j++)
        {
            if(a[i].vondieule>a[j].vondieule)
            {
                tg=a[i];
                a[i]=a[j];
                a[j]=tg;
            }
        }
    }
}

void thempt(int a[], int &n, int vt, int x)
{
    for(int i=n-1; i>=vt; i--)
    {
        a[i+1] = a[i];
    }
    a[vt]=x;
    n++;
}

void xoapt(int a[], int &n, int vt)
{
    for(int i=vt+1; i<n; i++)
    {
        a[i-1] = a[i];
    }
    n--;
}