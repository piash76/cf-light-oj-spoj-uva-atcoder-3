
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
const int M=5005;

ll a[M],b[M],pref[M],suf[M],dp[M][M];


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll t,i,j;
    ll n;cin>>n;
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n;i++) cin>>b[i];


    pref[0]=a[0]*b[0];

    for(i=1;i<n;i++) pref[i]=pref[i-1]+(a[i]*b[i]);

    suf[n-1]=a[n-1]*b[n-1];

    for(i=n-2;i>=0;i--) suf[i]=suf[i+1]+(a[i]*b[i]);




    ll ans=pref[n-1];

    for(ll len=0;len<n;len++)
    {
        for(ll st=0;st<n;st++)
        {
            ll ed=st+len;

            if(ed>=n) break;

            ///cout<<"ST "<<st<<" ED "<<ed<<endl;

            if(len==0)
            {
                dp[st][ed]=a[st]*b[st];
            }
            else if(len==1)
            {
                dp[st][ed]=a[ed]*b[st]+a[st]*b[ed];
            }
            else
            {
                dp[st][ed]=dp[st+1][ed-1]+a[ed]*b[st]+a[st]*b[ed];
            }

            ///cout<<"DP "<<dp[st][ed]<<endl;

        }
    }


    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            ///by reversing sub array of (i->j)
            ///cout<<"I "<<i<<" J "<<j<<endl;

            ll s1=0;
            if(i-1>=0) s1+=pref[i-1];
            if(j+1<n) s1+=suf[j+1];

            ///cout<<"PREF "<<pref[i-1]<<" SUF "<<suf[i+1]<<endl;


            s1+=dp[i][j];

            ///cout<<"S "<<s1<<endl;

            ans=max(ans,s1);
        }
    }

    cout<<ans<<"\n";









    return 0;

}




