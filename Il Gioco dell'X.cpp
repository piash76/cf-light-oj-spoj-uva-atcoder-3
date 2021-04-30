#include<bits/stdc++.h>
#define ll long long

using namespace std;
int x[6]= {-1,-1,0,0,1,1};
int y[6]= {-1,0,-1,1,0,1};
char gp[300][300];
int vis[300][300];
int n,p;
void dfs(int i,int j)
{
  if(gp[i][j]=='b' && i==n-1)
  {
      p=1;
      return;
  }
  if(gp[i][j]=='w')
  {
      return;
  }
  if(i<0 || j<0 || i>=n || j>=n)
  {
      return;
  }
  else
  {
      gp[i][j]='w';
      dfs( i-1 , j-1 );
       dfs( i-1 ,  j  );
        dfs(  i  , j-1 );
        dfs(  i  , j+1 );
        dfs( i+1 ,  j  );
        dfs( i+1 , j+1 );
  }

}

int main()
{
    int i,j,cas=0;
    while(cin>>n)
    {
        p=0;
        memset(gp,0,sizeof(gp));
        if(n==0) break;

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>gp[i][j];
            }
        }

        for(i=0;i<n;i++)
        {
            if(gp[0][i]=='b')
            {
              dfs(0,i);
            }
        }
        if(p)
        {
            printf("%d B\n",++cas);
        }
        else
        {
            printf("%d W\n",++cas);
        }




    }
    return 0;
}
