///https://www.youtube.com/watch?v=EOl4BzGozBs&t=9305s
///https://www.youtube.com/watch?v=dh3NUpsfzxg&t=7102s


///kuhn algorithm for maximum bpm
///N*E

///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long

using namespace std;

const ll inf=1e18;
const int mod=1e9+7;
const int M=1005;

vector<ll> g[M];

ll vis[M],Left[M],Right[M];
ll n,m;

/*

u-->v
left[u]=v  --> right[v]=u

All acyclic graphs are bipartite.
A cyclic graph is bipartite iff all its cycles are of even length

maximum total independent set of vertices =total vertices-bpm (in one component bipartite graph)


minimum vertex cover =bpm (undirected bipartite graph)
here it means taking minimum vertex such that all edges are covered by them

minimum edge cover =n-bpm (undirected bipartite connected graph)
here it means taking minimum edge such that all vertices are covered by them

MINIMUM path cover in DAG =total vertices-bpm

 the size of the minimum edge cover plus the size of the minimum vertex cover
 is equal to the number of vertices.
*/


bool kuhn(ll u) ///u= left side candidate
{
    for(auto v:g[u])
    {
        if(vis[v]==0)
        {
            vis[v]=1;

            if(Right[v]==-1 or kuhn(Right[v]))
            {
                Right[v]=u;
                Left[u]=v;
                return true;
            }
        }
    }

    return false;

}



ll bpm()
{
    memset(Left,-1,sizeof(Left));
    memset(Right,-1,sizeof(Right));

    ll match=0;
    for(ll i=1;i<=n;i++)  ///candidates of one side here left
    {
        memset(vis,0,sizeof(vis));  ///every time we may visit the visited node so that we can compromise

        if(kuhn(i)) match++;

    }


    return match;
}

int main()
{
    ll t,i,j;

    cin>>n>>m; ///nodes in left side , edge m;

    for(i=1;i<=m;i++)
    {
        ll u,v;cin>>u>>v;
        g[u].push_back(v);
    }

    cout<<bpm()<<endl;


    return 0;

}

/*
1 1
2 2

no prob here
*/



