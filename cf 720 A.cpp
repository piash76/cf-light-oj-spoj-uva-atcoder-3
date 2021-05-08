
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
        ll a,b;cin>>a>>b;

        if(b==1) cn;
        else
        {

        cy;
        cout<<a<<" "<<a*b<<" "<<a+a*b<<endl;

        }


    }

    return 0;

}


/*

5
29
48 172 166 74 166 156 148 140 8 6 178 46 68 58 138 22 100 20 122 60 138 196 12 54 122 198 38 42 112

*/

for(i=1;i<n;i++)
        {
           if(__gcd(a[i-1],a[i])!=1)
           {
               cout<<a[i]<<" "<<a[i-1]<<endl;
               break;
           }
        }



