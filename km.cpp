#include<bits/stdc++.h>
#define ll long long
#define see_you return 0
#define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    godspeed()
    ll t,j,v,s,e,f,i,x,y,z;
    cin>>t>>s>>v>>j>>e>>f;
    ll r=min(t,min(s,min(v,j)));
      x=r*max(e,f);


        y=r*f+min(t,(j-r))*e;

        z=r*e+min(v,min(s,(j-r)))*f;
        cout<<x<<" "<<y<<" "<<z<<endl;
        cout<<max(x,max(y,z))<<endl;

}
