///https://betterprogramming.pub/dynamic-programming-interview-questions-maximum-profit-in-job-scheduling-6c5ec15c4cc5


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
const int mod2=2147483647; ///2^31-1
const int M=500005;



struct job
{
    ll st,ed,pt;
};


bool cmp(job x,job y)
{
    if(x.ed==y.ed) return x.st<=y.st;
    else return x.ed<=y.ed;
}

job a[M];
ll n;
ll dp[M];



ll bin(ll idx)
{
    ll l=0,h=n,ans=-1;

    while(l<=h)
    {
        ll mid=(l+h)/2;

        if(a[mid].ed<=a[idx].st)
        {
            ans=max(ans,mid);
            h=mid-1;
        }
        else l=mid+1;
    }

    return ans;
}



int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll t,i,j;

    for(i=0;i<n;i++)
    {
        ll s,e,p;cin>>s>>e>>p;
        a[i].st=s;
        a[i].ed=e;
        a[i].pt=p;
    }

    sort(a,a+n,cmp);

    dp[0]=a[0].pt;

    for(i=1;i<n;i++)
    {
        ll s=a[i].pt;

        ll idx=bin(i);

        if(idx!=-1) s+=dp[idx];

        dp[i]=max(s,dp[i-1]); ///store the maximum profit by including or excluding the current job
    }

    cout<<dp[n-1]<<endl;



    return 0;

}



