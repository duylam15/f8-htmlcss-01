#include <iostream>
#include <math.h>
using namespace std;

// int main()
// {
//     int a, b, c, d;
//     cin>>a>>b>>c>>d;
//     int max;
//     max=a;
//     if(max<b) max=b;
//     if(max<c) max=c;
//     if(max<d) max=d;
//     cout<<max;
//     return 0;
// }

int dequy(int n)
{
    if(n==1)
    {
        return 1;
    }
    return dequy(n-1) + n;
}

int main()
{
    int n;
    cin>>n;
    cout<<dequy(n);
    return 0;
}















































//