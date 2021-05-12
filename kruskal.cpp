#include<bits/stdc++.h>
using namespace std;
#define MAXN 1000009
#define ll long long int

///kruskal algo for mst
///মনে করি E হলো এজ সংখ্যা। এজগুলোকে সর্ট করতে হবে, সেটার কমপ্লেক্সিটি O(ElogE),
///এরপরে শুধু এজগুলোর উপর লিনিয়ার লুপ চালাতে হবে। তাহলে মোট কমপ্লেক্সিটি O(ElogE)।
struct edge
{
    ll u, v, w;
    bool operator<(const edge& p) const
    {
        return w < p.w;
    }
};
ll pr[MAXN];
vector<edge> e;

ll find(ll x)
{
    if(pr[x]==x) return x;
    else return pr[x]=find(pr[x]); ///path compresssion
}


ll kruskal(ll n)
{
    sort(e.begin(), e.end());
    for (ll i = 1; i <= n; i++)
        pr[i] = i;

    ll count = 0, s = 0;
    for (ll i = 0; i < (ll)e.size(); i++) {
        ll u = find(e[i].u);
        ll v = find(e[i].v);
        if (u != v) {
            pr[u] = v;   ///union
            count++;
            s += e[i].w;
            if (count == n - 1)
                break;
        }
    }


    /* for(ll i=1;i<=n;i++)
    {
        //cout<<pr[i]<<" ";
        if(pr[i]==i)   ///no of connected component
        {
        }
    }*/

    return s;    ///minimum cost of mst
}

int main()
{

    ll n, m;
    cin >> n >> m;
    for (ll i = 1; i <= m; i++) {
        ll u, v, w;
        cin >> u >> v >> w;
        edge get;
        get.u = u;
        get.v = v;
        get.w = w;
        e.push_back(get);
    }
    cout << kruskal(n) << endl;
    return 0;
}
