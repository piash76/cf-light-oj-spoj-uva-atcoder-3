
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
const int M=500005;

ll ask(ll l,ll r)
{
    cout<<"?"<<" "<<l<<" "<<r<<endl;
    cout.flush();

    ll sum;cin>>sum;

    return sum;

}


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);



    ll i,j;

    ll n,t;cin>>n>>t;
    ll k;cin>>k;


    ll l=1,h=n;

    while(l<=h)
    {
        if(l==h) break;

        ll mid=(l+h)/2;

        ll s=ask(l,mid); ///left to mid

        ll no_of_zero=(mid-l+1)-s;
       // cout<<"NO "<<no_of_zero<<endl;

        if(no_of_zero<k)
        {
            l=mid+1;
            k-=no_of_zero;
       // cout<<"K BORO "<<l<<" "<<h<<endl;
           //cout<<"boro K "<<k<<endl;

        }
        else if(no_of_zero>=k)
        {
            h=mid;

            //cout<<"K CHOTO ba shoman "<<l<<" "<<h<<endl;
           // cout<<"choto K "<<k<<endl;
        }




    }

    cout<<"! "<<l<<endl;



    return 0;

}



