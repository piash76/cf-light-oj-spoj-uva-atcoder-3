

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

ll a[10],b[10];


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j;

    ll n,k;cin>>n>>k;



    ll prev=n;

    for(i=1;i<=k;i++)
    {
        ll tmp=prev;

        ll idx1=0,idx2=0;
        while(tmp)
        {
            a[idx1++]=b[idx2++]=tmp%10;
            tmp/=10;
        }


        sort(a,a+idx1,greater<ll>());sort(b,b+idx2);

        ll nm1=0,nm2=0,r1=1,r2=1;

        for(j=idx1-1;j>=0;j--)
        {

            nm1+=r1*(a[j]);
            r1*=10;
        }
         for(j=idx2-1;j>=0;j--)
        {

            nm2+=r2*(b[j]);
            r2*=10;
        }

       // cout<<nm1<<" "<<nm2<<endl;

        prev=nm1-nm2;
        if(prev==0) break;
    }

    cout<<prev<<endl;



    return 0;

}



