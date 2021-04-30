




///PROBLEM DESCRIPTION:


#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



#define ll long long
#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl


using namespace std;




const int mod = 1000000007;


const int maxn =1000005;///1e6
ll a[maxn];


int main()
{


    speed()



    ll t,i,j,cas=0;
    cin>>t;
    while(t--)
    {
        ll a,b,r;cin>>a>>b>>r;
        string s;cin>>s;
        ll n=s.size();

        vector< pair<ll,ll> > v; ///idx,cost


        for(i=0;i<n-1;)
        {
            if(s[i]=='A')
            {
                ll cst=0,idx=i;
                while(s[i]=='A' and i<n-1)
                {
                    i++;
                }

                //cout<<"I "<<i<<endl;
                cst+=a;

                v.push_back({idx+1,cst});
            }
            else if(s[i]=='B' and i<n-1)
            {
                ll cst=0,idx=i;
                while(s[i]=='B')
                {
                    i++;
                }

                //cout<<"I "<<i<<endl;

                cst+=b;

                v.push_back({idx+1,cst});
            }
        }




         //for(i=0;i<v.size();i++) cout<<v[i].first<<" "<<v[i].second<<endl;


          ll pref=0,ans=LLONG_MAX;
          for(i=v.size()-1;i>=0;i--)
          {
              pref+=v[i].second;
              ll idx=v[i].first;

              if(pref<=r)
              {
                  ans=min(ans,idx);
              }

          }

          if(ans==LLONG_MAX) ans=n;


         cout<<ans<<endl;






    }

}

/*
6
3 2 8
AABBBBAABB
1 1 1
AB
*/



