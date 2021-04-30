
///https://www.youtube.com/watch?v=jhqFJe6-Cnk

#include<bits/stdc++.h>
using namespace std;
#define long long

int gcd(int a,int b) ///a>b
{
    if(b==0) return a;
    else return gcd(b,a%b);
}

ll xGCD(ll a,ll b,ll &x,ll &y)  ///gcd(a,b)=ax+by ;(x,y) smallest pair where x<=y
{
    if(b == 0) {
       x = 1;
       y = 0;
       return a;
    }

    ll x1, y1, gcd = xGCD(b, a % b, x1, y1);
   // cout<<"a "<<a<<" b "<<b<<endl;
    //cout<<"X1 "<<x1<<endl;
   // cout<<"Y1 "<<y1<<endl;
    x = y1;
    y = x1 - (a / b) * y1;
  //  cout<<"X "<<x<<endl;
    //cout<<"Y "<<y<<endl;


    //return gcd;
}


int main()
{
    int i,j,g,n;
    int a,b,x,y;cin>>a>>b;
    cout<<xGCD(a,b,x,y)<<endl;
   /* while(1)
    {

    cin>>n;
    if(n==0) return 0;

    g=0;
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            g+=gcd(i,j);
        }
    }

    cout<<g<<endl;
    }*/
}
