

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
const int M=500005;

ll a[M];


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j;
    cin>>t;
    while(t--)
    {
        ll n,k;cin>>n>>k;



        for(i=0;i<n;i++) cin>>a[i];

        ll sum=0,ans=0;

        sum+=a[0];

        for(i=1;i<n;i++)
        {

           if(a[i]*100>sum*k)
            {
                ll x=a[i]*100;
                ll y=k;

                ll req=(x+y-1)/y;

                ll dif=(req-sum);

                sum+=dif;ans+=dif;

            }

            sum+=a[i];
        }

        cout<<ans<<endl;


    }

    return 0;

}





