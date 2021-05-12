
///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll long long
#define pll  pair<ll,ll>


using namespace std;

const int N=105;

int vis[N],Match[N];

double gx[N],gy[N],hx[N],hy[N];

vector<int> g[N];

int n,m,s,v;

bool kuhn(ll u)
{
    for(auto v:g[u])
    {
        if(vis[v]==0)
        {
            vis[v]=1;

            if(Match[v]==-1 or kuhn(Match[v]))
            {
                Match[v]=u;
                return true;
            }
        }
    }

    return false;
}




int bpm()
{
    memset(Match,-1,sizeof(Match));

    int match=0;
    for(int i=1;i<=n;i++)
    {
        memset(vis,0,sizeof(vis));
        if(kuhn(i)) match++;
    }

    return match;
}

int main()
{
    int t,i,j;
   // scanf("%lld",&t);
    while(scanf("%d %d %d %d",&n,&m,&s,&v)!=EOF)
    {

        for(i=0;i<N;i++) g[i].clear();



        for(i=1;i<=n;i++)
        {
            scanf("%lf %lf",&gx[i],&gy[i]);
        }

        for(i=1;i<=m;i++)
        {
            scanf("%lf %lf",&hx[i],&hy[i]);
        }

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                double d=(double)v*s;  ///s==vt
                ///sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))
                double dis=sqrt((hx[j]-gx[i])*(hx[j]-gx[i]) + (hy[j]-gy[i])*(hy[j]-gy[i]));
                ///(x1,y1)=gx[i],gy[i] , (x2,y2) =hx[j],hy[j]

                //cout<<"D "<<d<<" DIS "<<dis<<endl;

                if(d>=dis)
                {
                    //cout<<"I "<<i<<" "<<j<<endl;
                    g[i].push_back(j);
                }
            }
        }


        int ans=n-bpm();

        printf("%d\n",ans);




    }

    return 0;

}

/*

2 2 5 10
1.0 1.0
2.0 2.0
100.0 100.0
20.0 20.0

*/



