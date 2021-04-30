#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll n,i,j,t,x,ans;
    cin>>t;
    while(t--)
    {
        ans=0;
        x=1;
        cin>>n;
        while(n!=0)
        {
            if(n%3==2)
            {
                ans=0;
                n++;
            }
            if(n%3==1)

            {
                ans+=x;
            }
            x*=3;
            n/=3;
        }
        cout<<ans<<endl;
    }
}
