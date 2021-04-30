#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,i,j,a=0,b=0;
    cin>>n;
    ll x[n];
    for(i=0;i<n;i++)
    {
        cin>>x[i];
    }
    sort(x,x+n);
    for(i=0;i<n/2;i++)
    {
        a+=x[i];
    }
    for(i=n/2;i<n;i++)
    {
        b+=x[i];
    }
    cout<<a*a+b*b<<endl;

}
