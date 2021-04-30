#include<bits/stdc++.h>
using namespace std;
//#define int long long int
#define mod 1000000007
#define INF 1e9+100
#define pii pair<int,int>
#define ppi pair<pii,int>
#define ff first
#define ss second
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define urs(r...)          typename decay<decltype(r)>::type
#define fi(i,n)                for(urs(n) i=0;i<n;i++)
#define re(i,n)               for(urs(n) i=1;i<=n;i++)
#define pb push_back
#define gap ' '
#define mx 300005
int present=1;
vector<int>adj[mx];
int start[mx];
int finish[mx];
int depth[mx];
int par[mx];
void dfs(int node,int prev)
{
	start[node]=present++;
	depth[node]=depth[prev]+1;
	par[node]=prev;
	for(auto next : adj[node])
	{
		if(next==prev) continue;
		 dfs(next,node);
	}
	finish[node]=present++;
}
main()
{
	int i,j,n,m,k;
	int u,v;
	cin>>n>>k;
	fi(i,n-1)
	{
		cin>>u>>v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	dfs(1,0);
	int q;
	int z;
	while(k--)
	{
		vector<pii>traverse;
		cin>>q;
		fi(i,q)
		{
			cin>>z;
			if(z!=1) z=par[z];   //This is basically done to find out if the parent index is 1 and if is then the start and the finish time of the parent node is same if the children astray into multiple path
			traverse.pb({depth[z],z}); //depth is at the first element because it will help us sort according to the depth..What we are basically doing is building the tree according to the depth...Lesser the depth earlier will be the presence of the node
		}
		int cur=1;
		sort(traverse.begin(),traverse.end());
		bool flag=0;
		for(auto nxt:traverse)
		{
			if(start[nxt.ss]>=start[cur] and finish[nxt.ss]<=finish[cur])
			{
				cur=nxt.ss;
			}
			else
			{
				flag=1;
				break;
			}
		}
		if(!flag) cy
		else cn
	}
}
