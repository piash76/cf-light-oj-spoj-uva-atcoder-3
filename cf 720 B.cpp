
///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second


using namespace std;

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
        ll n;cin>>n;
        for(i=0;i<n;i++) cin>>a[i];


        map<pll,pll> ans;

        ll p=1000000007,q=1000000009;

        ll cnt=0,prev=-1;

        for(i=1;i<n;i++)
        {
            //if(__gcd(a[i],a[i-1])!=1)
           // {


                ll mn=min(a[i],a[i-1]);

                if(a[i-1]==mn)
                {
                    a[i-1]=mn;
                    if(prev==-1 or prev==q)
                    {
                         a[i]=p;
                       ans[{i-1+1,i+1}]={mn,p};
                       prev=p;
                    }
                    else
                    {

                       a[i]=q;
                       ans[{i-1+1,i+1}]={mn,q};

                        prev=q;
                    }


                }
                else
                {
                    a[i]=mn;

                    if(prev==-1 or prev==q)
                    {
                         a[i-1]=p;
                       ans[{i+1,i-1+1}]={mn,p};
                       prev=p;

                    }
                    else
                    {
                        a[i-1]=q;
                       ans[{i+1,i-1+1}]={mn,q};
                       prev=q;
                    }


                }

                //cnt++;



           // }


        }

       /* for(i=0;i<n;i++)
        {
          cout<<a[i]<<" ";
        }
        cout<<endl;*/



        cout<<ans.size()<<endl;
        for(auto x:ans) cout<<x.ff.ff<<" "<<x.ff.ss<<" "<<x.ss.ff<<" "<<x.ss.ss<<endl;


    }

    return 0;

}






