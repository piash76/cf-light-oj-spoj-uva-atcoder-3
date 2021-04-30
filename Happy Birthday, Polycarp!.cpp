




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
        ll n;cin>>n;
        ll s=0,b=0;

        for(i=1;i<=9;i++)
        {
            b=b*10+1;

            for(j=1;j<=9;j++)
            {
                if(b*j<=n) s++;
            }
        }

        cout<<s<<endl;






    }

}




