

///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second

#define  mp  make_pair
#define  pb  push_back

#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl


using namespace std;

const ll inf=1e18;
const int mod=1e9+7;
const int mod2=2147483647; ///2^31-1
const int M=1000005;

ll a[M],b[M];


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);



    ll t,i,j;
    ll n;cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }

    if(is_sorted(b,b+n)) cout<<1<<" "<<1<<endl;
    else
    {
        sort(a,a+n);
        ll l,r;

        for(i=0;i<n;i++)
        {
            if(a[i]!=b[i]) {l=i;break;}
        }

        for(i=n-1;i>=0;i--)
        {
            if(a[i]!=b[i]) {r=i;break;}
        }

        if(l>r)  cout<<"impossible"<<endl;
        else
        {

          reverse(b+l,b+r+1);


          if(is_sorted(b,b+n)) cout<<l+1<<" "<<r+1<<endl;
          else cout<<"impossible"<<endl;


        }


    }






    return 0;

}



