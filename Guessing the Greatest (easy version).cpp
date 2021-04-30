

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

ll a[M];


ll ask(ll l,ll r)
{
    //if(l>=r) return -1;

    cout<<"? "<<l<<" "<<r<<endl;
    cout.flush();
    ll idx;cin>>idx;
    return idx;
}


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n;cin>>n;


    ll l=1,r=n,ans;




    while(1)
    {
        //cout<<"L "<<l<<" R "<<r<<endl;

       /* if(r==l)
        {
            ans=r;
            break;
        }*/

        if(r-l==1)
        {
            ll smx=ask(l,r);
            if(smx==l) ans=r;
            else ans=l;

            break;
        }

        ll mid=(l+r)/2;

       // cout<<"MID "<<mid<<endl;

       // cout<<"WHOLE L "<<l<<" R "<<r<<endl;

        ll whole_idx=ask(l,r);



       // if(whole_idx==-1) break;


        if(whole_idx<=mid) ///left e check
        {


            ll lft_idx=ask(l,mid);

           // if(lft_idx==-1) break;

            if(lft_idx!=whole_idx) ///right e ja
            {
                l=mid;
            }
            else    ///left e ja
            {
                 r=mid;
            }
        }
        else  ///right e check
        {
            ll right_idx=ask(mid,r);

            //if(right_idx==-1) break;

            if(right_idx!=whole_idx)
            {
                 r=mid;

            }
            else
            {
                l=mid;
            }
        }





    }






    cout<<"! "<<ans<<endl;





    return 0;

}



