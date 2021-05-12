///Maximum Bipartite Matching
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

int Left[MAX], Right[MAX], vis[MAX];
vector<int>edge[MAX];

int n, m;

bool Kuhn(int u)
{
    for(int i = 0; i < edge[u].size(); i++)
    {
        int v = edge[u][i];
        if(vis[v])
            continue;
        vis[v] = 1;
        if(Right[v]==-1 || Kuhn(Right[v]))
        {
            Right[v] = u;
            Left[u] = v;
            return true;
        }
    }
    return false;
}

int BM()
{
    memset(Left, -1, sizeof(Left));
    memset(Right, -1, sizeof(Right));

    int cnt = 0;
    for(int i = 1; i <= n; i++)
    {
        memset(vis, 0, sizeof(vis)); ///every time we need to visit the visited node so that we can compromise
        if(Kuhn(i))
        {
            cnt++;
        }
    }

    return cnt;
}

int main()
{
    cin>>n>>m; // n - nodes in left side, m - edges
    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin>>u>>v;
        edge[u].push_back(v);
    }
    cout<<BM()<<endl;

    return 0;
}

