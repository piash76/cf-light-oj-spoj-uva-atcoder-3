
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

ll a[M],uni[M],skil[M],ans[M];


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);



    ll t,i,j;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        for(i=1;i<=n;i++) ans[i]=0;

        for(i=1;i<=n;i++) cin>>uni[i];

        for(i=1;i<=n;i++) cin>>skil[i];

        priority_queue<ll>q[n+5];

        for(i=1;i<=n;i++) q[uni[i]].push(skil[i]);


         ll mx=LLONG_MIN;
         vector<ll> ase;

        for(i=1;i<=n;i++)
        {
            ll sz=q[i].size();
            mx=max(mx,sz);

            if(sz) ase.push_back(i);
        }





        vector<ll>v[n+6];

        for(auto i:ase)
        {

                ll x=0;
                while(!q[i].empty())
                {
                    ll d=q[i].top();
                    q[i].pop();
                    x+=d;

                    v[i].push_back(x);

                }

        }

        //cout<<q[1].size()<<endl;

       // cout<<"MX "<<mx<<endl;

       /* for(i=1;i<=mx;i++)
        {
            cout<<"I "<<i<<endl;
            for(auto u:v[i])
            {
                cout<<u<<" ";
            }
            cout<<endl;

        }*/




        for(auto u:ase)
        {
            ll tot=v[u].size();
            for(i=1;i<=tot;i++)
            {
                ll d=tot/i;
                ll id=i*d;

                id--;

                if(id>=0)
                {
                    ans[i]+=v[u][id];
                }


            }
        }

        for(i=1;i<=n;i++) cout<<ans[i]<<" ";
        cout<<"\n";









    }

    return 0;

}



