
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

ll a[M];


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll t,i,j;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        string s;cin>>s;

        ll idx=0,suru=-1;

        for(i=0;i<n;i++) if(s[i]=='*') {suru=i;break; }

        if(suru==-1) cout<<0<<endl;
        else
        {

        ll cnt=1;
        a[idx++]=1;
        for(i=suru+1;i<n;i++)
        {
            cnt++;
            if(s[i]=='*')
            {
                a[idx++]=cnt;
            }
        }


        ll ans=0;

        ll mid=idx/2,c=1;

        for(i=mid-1;i>=0;i--)
        {
            ll d=(a[mid]-a[i])-c;
            c++;
            ans+=d;
        }

        c=1;
        for(i=mid+1;i<idx;i++)
        {
            ll d=(a[i]-a[mid])-c;
            c++;
            ans+=d;
        }

        cout<<ans<<endl;



        }




    }

    return 0;

}




