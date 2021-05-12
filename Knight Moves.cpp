#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
using namespace std;
int y,z;
int vis[10][10],cost[10][10];
string s1,s2;
int kx[] = { -1, -1, 1, 1, -2, -2, 2, 2 };
int ky[] = { 2, -2, 2, -2, 1, -1, 1, -1 };


void bfs(int sx,int sy)
{
    memset(vis,0,sizeof(vis));
    memset(cost,0,sizeof(cost));
    queue<int> q;
    q.push(sx);
    q.push(sy);
    vis[sx][sy]=1;
    cost[sx][sy]=0;
    while(!q.empty())
    {
        int ux=q.front();
        q.pop();
        int uy=q.front();
        q.pop();

        for(int k=0;k<8;k++)
        {
            int vx=ux+kx[k];
            int vy=uy+ky[k];
            if((vx>=1 && vx<=8) && (vy>=1 && vy<=8) && !vis[vx][vy])
            {
                vis[vx][vy]=1;
                cost[vx][vy]=cost[ux][uy]+1;
                q.push(vx);
                q.push(vy);
            }
        }
    }
}

int main()
{
    int w,x,y,z;
    while(cin>>s1>>s2)
    {
        w=s1[0]-'0'-48;
        x=s1[1]-'0';
        y=s2[0]-'0'-48;
        z=s2[1]-'0';
        //cout<<w<<" "<<x<<" "<<y<<" "<<z<<endl;
        bfs(w,x);
        cout<<"To get from "<<s1<<" to "<<s2<<" takes "<<cost[y][z]<<" knight moves.\n";

    }
}
