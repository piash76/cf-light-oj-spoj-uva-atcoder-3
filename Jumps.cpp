




///PROBLEM DESCRIPTION:


#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



#define ll long long


using namespace std;




const int mod = 1000000007;


const int maxn = 311111;
ll a[maxn];


int main()
{
    speed()

    ll t,i,j;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        ll d=1+(8*n);
        ll x1=-1+sqrtl(d);
        x1/=2;

        //cout<<x1<<endl;

        ll sum1=((x1)*(x1+1))/2;

        //cout<<sum1<<endl;

        ll x2=x1+1;
        ll sum2=((x2)*(x2+1))/2;

        //cout<<sum2<<endl;


        if(sum1==n) cout<<x1<<endl;
        else
        {
            if(sum2-1==n) cout<<x2+1<<endl;
            else cout<<x2<<endl;







        }



    }

}

