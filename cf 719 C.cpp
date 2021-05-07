

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
const int M=105;

ll a[M][M];


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);



    ll t,i,j;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        if(n==2) cout<<-1<<endl;
        else
        {
            ll idx=1;
            ll r=n*n;

            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(idx>r) idx=2;
                    a[i][j]=idx;
                    idx+=2;
                }
            }

            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++) cout<<a[i][j]<<" ";
                cout<<endl;
            }
        }




    }

    return 0;

}



