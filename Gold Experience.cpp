#include<bits/stdc++.h>

using namespace std;

long long gcd(long long x,long long y)
{
    int temp;
    if(x<y)
    {
        temp=x;
        x=y;
        y=temp;
    }
    if (y == 0)
        return x;
    return gcd(y, x%y);

}


int main()
{
    long long n,k,i,j,l=0,m;
    cin>>n>>k;
    long long a[n],b[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    l=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<(n-1);j++)
        {
            if(gcd(a[i],a[j])==1)
            {
                b[l]=(j+1);
                l++;

            }

        }
    }

    for(m=0;m<k;m++)
    {
        cout<<b[m]<<" ";
    }

    return 0;

}
