


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

ll a[M],ans;


ll ask(ll l,ll r)
{


    //if(r==l) return -1;

    cout<<"? "<<l<<" "<<r<<endl;
    cout.flush();
    ll idx;cin>>idx;
    return idx;
}

void bs(ll l,ll r,ll prev_pos)
{
   // cout<<"L "<<l<<" R "<<r<<endl;


    while(l<=r)
    {
        if(r==l)
        {
            ans=r;
            return;
        }

        if(r-l==1)
        {
            if(ask(l,r)==l) ans=r;
            else ans=l;
            return ;
        }

        ll mid=(l+r)/2;

        if(mid<prev_pos)
        {
            ll rt_idx=ask(mid,prev_pos);  ///right e check
            if(rt_idx==prev_pos)  ///right e ase
            {
                l=mid;   ///right e gelam

            }
            else  ///left e ase
            {
                r=mid-1;
            }
        }
        else if(mid>prev_pos)
        {
            ll lft_idx=ask(prev_pos,mid);

            if(lft_idx==prev_pos)
            {
                r=mid;
            }
            else
            {
                 l=mid+1;
            }

        }






    }

}

int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n;cin>>n;

    if(n==2)
    {
        ll idx=ask(1,2);
        if(idx==1) ans=2;
        else ans=1;
    }
    else
    {


    ll l=1,r=n;
    ll whole_idx=ask(l,r);


    if(whole_idx!=1)
    {
        ll lft_idx=ask(1,whole_idx);
        if(lft_idx==whole_idx)
        {
            bs(l,whole_idx-1,whole_idx);
        }
        else
        {
            bs(whole_idx+1,r,whole_idx);
        }
    }
    else
    {
        bs(2,r,whole_idx);

    }

    }




    cout<<"! "<<ans<<endl;





    return 0;

}



