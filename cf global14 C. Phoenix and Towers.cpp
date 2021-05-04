
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl


using namespace std;
const ll inf=1e18;
const int mod=1e9+7;
const int M=500005;

ll a[M],b[M];


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll t,i,j;
    cin>>t;
    while(t--)
    {
        ll n,m,d;cin>>n>>m>>d;

        vector<pll> v;

        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            v.push_back({a[i],i});
        }

        sort(v.begin(),v.end());


        ll clr=1;

        for(auto it:v)
        {
            b[it.second]=clr++;
            if(clr==m+1) clr=1;
        }


         bool f=true;

        vector<pll> chek;

        for(i=1;i<=n;i++) chek.push_back({b[i],a[i]});

        sort(chek.begin(),chek.end());

        //cy;
        //for(auto it:chek) cout<<it.first<<" "<<it.second<<endl;


        ll indx=0,col=1,sm1=0,prev=-1;

        while(indx<n)
        {
            sm1=0;
            while(chek[indx].first==col and indx<n)
            {
                sm1+=chek[indx].second;
                indx++;
            }
            col++;
            //cout<<"SM1 "<<sm1<<endl;

            if(prev==-1) prev=sm1;
            else
            {
               if(abs(prev-sm1)>d) {f=false;break;}
               else
               {
                   prev=sm1;
               }

            }
        }


        if(f)
        {
            cy;
            for(i=1;i<=n;i++) cout<<b[i]<<" ";
            cout<<endl;
        }
        else
        {
            cn;
        }



    }

    return 0;

}




