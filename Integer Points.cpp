#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t,i,j,n,m,w,x,y,z,c;
    cin>>t;
    while(t--)
    {
        w=0,x=0,y=0,z=0;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                w++;
            }
            else
            {
                x++;
            }
        }
        cin>>m;
        ll b[m];
        for(i=0;i<m;i++)
        {
            cin>>b[i];
            if(b[i]%2==0)
            {
                y++;
            }
            else
            {
                z++;
            }
        }


        cout<<(w*y)+(x*z)<<endl;

    }
}
