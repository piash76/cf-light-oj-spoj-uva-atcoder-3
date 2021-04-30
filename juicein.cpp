#include<bits/stdc++.h>
#define godspeed() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define pi acos(-1)
using namespace std;

int main()
{
    godspeed()
    int t,i;
    double v,R,r1,r2,p,h;
    cin>>t;
    for(i=1;i<=t;i++)
    {
       cin>>r1>>r2>>h>>p;
       R=r2+(r1-r2)*(p/h);
       //cout<<R<<endl;
       v=1/3.0*pi*p*(R*R+R*r2+r2*r2);
       printf("Case %d: %lf\n",i,v);

    }

    return 0;
}
