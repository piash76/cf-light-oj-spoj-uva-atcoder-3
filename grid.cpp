char grid[25][25];
int vis[25][25];
int r,c,cnt;
int X[4]= {-1,0,0,1};
int Y[4]= {0,-1,1,0};


bool valid(ll i, ll j) { return i >= 1 && i <= n && j >= 1 && j <= m; }

void dfs(int i,int j)
{
    int k,vx,vy;
    vis[i][j]=1;
    for(k=0;k<4;k++)
    {
        vx=i+X[k];
        vy=j+Y[k];
        if(vx>=0 && vx<r && vy>=0 && vy<c)
        {
            if(vis[vx][vy]==0 && grid[vx][vy]=='.')
            {
                cnt++;
                dfs(vx,vy);
            }
        }
    }

}

void dfs(int i,int j)
{
    if(i<0 || i>=r || j<0 || j>=c) return;
    else if(grid[i][j]=='.')
    {
        cnt++;
        grid[i][j]='#';
    }
    else if(grid[i][j]=='#') return;
    dfs(i, j+1);
    dfs(i+1, j);
    dfs(i, j-1);
    dfs(i-1, j);

}

char gp[30][30];
int n,c,row,col;

void dfs(int x,int y)
{
    if(x<0 || x>=row || y<0 || y>=col) return;
    else if(gp[x][y]=='0') return;
    else if(gp[x][y]=='1')
    {
        gp[x][y]='0';
        c++;
    dfs(x,y+1);
    dfs(x,y-1);
    dfs(x+1,y);
    dfs(x-1,y);
    dfs(x+1,y+1);
    dfs(x+1,y-1);
    dfs(x-1,y+1);
    dfs(x-1,y-1);

    }
}


void dfs(int i,int j)
{
    if(i<0 || i>=n || j<0 || j>=m) return;
    else if(vis[i][j]) return;

    else if(grid[i][j]=='#') return;


    else if(grid[i][j]=='.')
    {
        //cout<<". paisi"<<endl;
        vis[i][j]=1;
    }

    else if(grid[i][j]=='G')
    {
        //cout<<"G paisi"<<endl;
        vis[i][j]=1;
        cnt++;

    }
    dfs(i, j+1);
    dfs(i+1, j);
    dfs(i, j-1);
    dfs(i-1, j);


}
