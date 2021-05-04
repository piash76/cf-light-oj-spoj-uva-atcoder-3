
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

ll a[M];


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);



    ll t,i,j;
    cin>>t;
    while(t--)
    {
        ll n,x;cin>>n>>x;
        for(i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);

        vector<ll> v1,v2;



        ll s=0;
        for(i=0;i<n;i++)
        {
            s+=a[i];
            if(s==x) { v2.push_back(a[i]);s-=a[i]; }
            else v1.push_back(a[i]);
        }


        vector<ll> ans;
        for(auto it:v1) ans.push_back(it);
        for(auto it:v2) ans.push_back(it);


        bool f=true;
        ll sm=0;
        for(auto it:ans)
        {
            sm+=it;
            if(sm==x) {f=false;break;}

        }

        if(f)
        {
            cy;

            for(auto it:ans) cout<<it<<" ";
            cout<<endl;
        }
        else cn;


    }

    return 0;

}



