int SoNguyenTo(int n)
{
     if (n<=1)
         return 0;
     for (int i=2; i<n; i++)
         if(n%i==0)
             return 0;
     return 1;
}
int NguyenToLonNhat(int a[],int n)
{
    int dem=0;
    int max;
    for(int i=0; i<n; i++)
    {
        if(SoNguyenTo(a[i])==1)
        {
            dem ++;
            max = a[i];
            break;
        }
    }
    if (dem ==0)
        return 0;
    for (int i=0; i<n; i++)
    {
        if ((SoNguyenTo(a[i])==1) && (max<a[i]))
        {
            max = a[i];
        }
    }
    return max;
}
void nhapmang(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
}
int tongpt(int n)
{
    int t=0;
    while(n!=0)
    {
        t+=n%10;
        n/=10;
    }
    return t;
}
void tongmang(int a[], int n)
{
    int tong=0;
    for(int i=0; i<n; i++)
    {
        tong = tong + tongpt(a[i]);
    }
    cout<<tong;
}
int main ()
{
    int n;
    cin>>n;
    int a[n];
    nhapmang(a, n);
    if(NguyenToLonNhat(a, n)) cout<< NguyenToLonNhat(a, n);
    tongmang(a, n);
    return 0;
}
