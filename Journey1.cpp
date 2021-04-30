

///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second

#define  mp  make_pair
#define  pb  push_back

#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl


using namespace std;

const ll inf=1e18;
const int mod=1e9+7;
const int M=500005;

ll dp[M][4],ans[M];


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        string s;cin>>s;

        for(i=0;i<=n+5;i++) dp[i][0]=dp[i][1]=dp[i][2]=dp[i][3]=0;

        ///[i][0]=RLRL .
        ///[i][1]= LRLR .

        if(s[0]=='L') dp[0][0]=1;
        if(s[0]=='R') dp[0][1]=1;


        for(i=1;i<n;i++)
        {
            if(s[i]=='R') dp[i][1]=dp[i-1][0]+1;
            else if(s[i]=='L') dp[i][0]=dp[i-1][1]+1;
        }

        //cout<<dp[n-1][0]<<endl;

        ///[i][2]== . RLRL
        ///[i][3]== .LRLR

        if(s[n-1]=='R') dp[n-1][2]=1;
        if(s[n-1]=='L') dp[n-1][3]=1;

        for(i=n-2;i>=0;i--)
        {
            if(s[i]=='R') dp[i][2]=dp[i+1][3]+1;
            else if(s[i]=='L') dp[i][3]=dp[i+1][2]+1;
        }

        //cout<<dp[0][2]<<endl;

        ll idx=0;
        ans[idx++]=dp[0][2]+1;

        for(i=1;i<n;i++)
        {
            ans[idx++]=dp[i-1][0]+dp[i][2]+1;
        }

        ans[idx++]=dp[n-1][0]+1;

        for(i=0;i<idx;i++) cout<<ans[i]<<" ";
        cout<<endl;







    }

    return 0;

}







