#include<bits/stdc++.h>
#define ll long long
using namespace std;

int check(ll n)
{
    ll f=1,x;
    while(n!=0)
    {
        x=n%3;
        if(x==2)
        {
            f=0;
            break;
        }
        n/=3;
    }
    if(f)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int main()
{
    ll n,i,j,k,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
        {
            cout<<n<<endl;
            continue;
        }
        if(n==2)
        {
            cout<<n+1<<endl;
            continue;

        }
        while(1)
        {
            ll r=check(n);
            if(r)
            {
               cout<<n<<endl;
               break;
            }
            else
            {
                n++;
            }

        }

    }
}
