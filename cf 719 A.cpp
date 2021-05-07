

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
        ll n;cin>>n;

        string s;cin>>s;

        bool f=false;

        map<char,ll> m;

        ll i=0;
        while(i<n)
        {

            if(m[s[i]])
            {

                f=true;
                break;
            }
            else
            {
               char ch=s[i];
               m[ch]=1;

               while(s[i]==ch and i<n)
               {

                   i++;
               }


            }
        }

        if(f) cn;
        else cy;


    }

    return 0;

}



