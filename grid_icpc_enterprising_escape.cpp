
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll X[4] = {-1,0,0,1};
ll Y[4] = {0,-1,1,0};
ll dis[2001][2001],cost[2001][2001];
ll n,m;

const ll inf = 1e18;


void djk(ll i,ll j)
{
    priority_queue< pair<ll,pair<ll,ll>>,vector<pair<ll,pair<ll,ll>>>,greater<pair<ll,pair<ll,ll>>> >q;
    q.push({0,{i,j}});
    dis[i][j]=0;

    while(!q.empty())
    {
        ll ux=q.top().second.first;
        ll uy=q.top().second.second;
        q.pop();

        for(ll i=0;i<4;i++)
        {
            ll vx=ux+X[i];
            ll vy=uy+Y[i];

            if(vx>=0 and vx<n and vy>=0 and vy<m)
            {
                if(dis[ux][uy]+cost[vx][vy]<dis[vx][vy])
                {
                    dis[vx][vy]=dis[ux][uy]+cost[vx][vy];
                    q.push({dis[vx][vy],{vx,vy}});
                }
            }
        }
    }

}




int  main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll t;cin>>t;

    while(t--)
    {
        ll i,j;

        for(i=0;i<=1005;i++)
        {
            for(j=0;j<=1005;j++)
            {

                dis[i][j]=inf;
            }
        }


        ll k;


        cin>>k>>m>>n;


        map<char,ll> mp;

        for(i=0;i<k;i++)
        {
            char ch;ll val;
            cin>>ch>>val;
            mp[ch]=val;
        }

        ll src1,src2;
        for(i=0;i<n;i++)
        {
            string s;cin>>s;

            for(j=0;j<m;j++)
            {
                if(s[j]=='E')
                {
                    src1=i,src2=j;
                   cost[i][j]=0;
                }
                else
                {
                     cost[i][j]=mp[s[j]];
                }

            }
        }





       djk(src1,src2);
       ll ans=LLONG_MAX;

       for(i=0;i<m;i++)
       {
           ans=min(ans,dis[0][i]);
           ans=min(ans,dis[n-1][i]);
       }
       for(i=0;i<n;i++)
       {
           ans=min(ans,dis[i][0]);
           ans=min(ans,dis[i][m-1]);
       }




        cout<<ans<<"\n";



    }

    return 0;
}

/*

2
6 3 3
A 1
B 2
C 3
D 4
F 5
G 6
ABC
FEC
DBG
2 6 3
A 100
B 1000
BBBBBB
AAAAEB
BBBBBB


1
2 7 6
A 1
B 1000
BBBBABB
BBBBABB
BBBBABB
BEBBABB
BAAAABB
BBBBBBB

*/
