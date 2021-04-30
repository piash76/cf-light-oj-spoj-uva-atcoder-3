    #include<bits/stdc++.h>
    #define ll long long
    #define see_you return 0
    #define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    using namespace std;

    int main()
    {

        godspeed()
        int n,m,i,j,k,s,y,z,p,q,mx;
        cin>>n>>m;
        int cnt[10]={0},maxa[10]={0},x[1005];
        char a[1005][1005],b[1005][1005];
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                cin>>a[i][j];
            }
        }
        for(i=1;i<=m;i++)
        {
            cin>>x[i];
        }
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
            {
              b[i][j]=a[j][i];
            }
        }
     s=0;
       for(i=1;i<=m;i++)
        {
            memset(cnt,0,sizeof(cnt));
            mx=0;
            for(j=1;j<=n;j++)
            {
                //cout<<b[i][j];
                y=(b[i][j]-65);

                cnt[y]++;
                mx=max(mx,cnt[y]);
            }
            s+=mx*x[i];

        }

        cout<<s<<endl;
        see_you;


    }
