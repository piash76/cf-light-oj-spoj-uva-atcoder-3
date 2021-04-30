#include<bits/stdc++.h>
#define ll long long
using namespace std;
int X[4] = {-1,0,0,1};
int Y[4] = {0,-1,1,0};
int gp[1001][1001],vis[1001][1001],cost[1001][1001];
int n,m;

///for level order traversal
///https://codeforces.com/gym/100819
///problem o


void bfs(int x,int y)
{
    queue<int> q;
    q.push(x);
    q.push(y);

    vis[x][y]=1;
    cost[x][y]=0;
    while(!q.empty())
    {
        int ux=q.front();
        q.pop();
        int uy=q.front();
        q.pop();
        for(int k=0;k<4;k++)
        {
           int vx=ux+X[k];
           int vy=uy+Y[k];
           if((vx>=0 && vx<=n) && (vy>=0 && vy<=m) && gp[vx][vy]==0)
           {
               if(!vis[vx][vy])
               {
                   vis[vx][vy]=1;
                   cost[vx][vy]=cost[ux][uy]+1;
                   q.push(vx);
                   q.push(vy);
               }
           }
        }
    }
}


int main()
{
     int i,j,k,sr1,sr2,t1,t2,rn,r,z,a;
    while(1)
    {
        scanf("%d %d",&n,&m);
        if(n==0 && m==0) break;
        memset(vis,0,sizeof(vis));
        memset(cost,0,sizeof(cost));
        memset(gp,0,sizeof(gp));
        scanf("%d",&rn);
        for(i=0;i<rn;i++)
        {
          scanf("%d %d",&r,&z);
          for(j=1;j<=z;j++)
          {
              scanf("%d",&a);
              gp[r][a]=1;
          }
        }
        scanf("%d %d",&sr1,&sr2);
        bfs(sr1,sr2);
        scanf("%d %d",&t1,&t2);
        printf("%d\n",cost[t1][t2]);


    }



    return 0;
}





