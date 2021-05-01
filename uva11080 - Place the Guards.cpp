///bicoloring

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
const int M=205;

ll vis[M];
vector<ll> g[M];

ll b,w;
bool f;

void dfs(ll u,ll c)
{
    vis[u]=c;
    if(c==1) b++;
    else w++;

    for(auto v:g[u])
    {
        if(vis[v]==-1) dfs(v,c^1);
        else
        {
            if(vis[u]==vis[v]) f=false;

        }
    }

}


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);



    ll t,i,j;
    cin>>t;
    while(t--)
    {
        memset(vis,-1,sizeof(vis));
        for(i=0;i<205;i++) g[i].clear();


        ll n,m;cin>>n>>m;

        for(i=1;i<=m;i++)
        {
            ll u,v;cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }


         f=true;
        ll cnt=0;


        for(i=0;i<n;i++)
        {
            if(vis[i]==-1)
            {
                b=w=0;
                dfs(i,1);

                if(b==1) w=LLONG_MAX;

                cnt+=min(b,w);

            }
        }

        if(f) cout<<cnt<<"\n";
        else cout<<-1<<"\n";





    }

    return 0;

}

/*

2
4 2
0 1
2 3
5 5
0 1
1 2
2 3
0 4
3 4

*/


