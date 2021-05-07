

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

int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);



    ll t,i,j;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;

        if(n<=9) cout<<n<<endl;
        else if(n==10) cout<<9<<endl;
        else if(n==11) cout<<10<<endl;
        else
        {

          ll s = 0,temp=0;

            for(i=1;i<=log10(n)+1;i++)
            {
                temp = temp * 10 + 1;

                for(j=1;j<=9;j++)
                   {
                    if ((temp * j) <= n) s++;
                   }
            }

            cout<<s<<endl;


        }

    }

}



