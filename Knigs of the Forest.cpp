

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


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j;

    ll k,n;cin>>k>>n;
    ll kl_yr,kl_val;cin>>kl_yr>>kl_val;

    vector<pll> v;

    v.push_back({kl_yr,kl_val});

    for(i=0;i<(n+k-2);i++)
    {
        ll yr,val;cin>>yr>>val;
        v.push_back({yr,val});
    }
    sort(v.begin(),v.end());

    priority_queue<ll> q;

    for(i=0;i<k;i++)
    {
        q.push(v[i].ss); ///all are 2011 yr
    }

    if(q.top()==kl_val)
    {
        cout<<kl_yr<<"\n";
    }
    else
    {
        q.pop();

        bool f=false;
        for(i=k;i<v.size();i++)
        {
            q.push(v[i].ss);
            if(q.top()==kl_val)
            {
                 cout<<v[i].ff<<"\n";
                 f=true;
                 break;
            }
            q.pop(); ///top will be winner
        }


        if(!f) cout<<"unknown"<<"\n";

    }

    return 0;

}

/*

2 4
2013 2
2011 1
2011 3
2014 4
2012 6


2 4
2011 1
2013 2
2012 4
2011 5
2014 3

*/

