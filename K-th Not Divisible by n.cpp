




///PROBLEM DESCRIPTION:


#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



#define ll long long


using namespace std;




const int mod = 1000000007;

const int maxn = 311111;

ll n,k;

int main()
{
    speed()

    ll t,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;

        ll ans;

        ll l=0,h=1e9;

        while(l<=h)
        {
            ll mid=(l+h)/2;
            //cout<<"MID "<<mid<<endl;

            ll mul=(n-1)*(mid);

           // cout<<"MUL "<<mul<<endl;

            if(mul<k)
            {
                ans=n*mid;
                l=mid+1;
            }
            else h=mid-1;
        }

        //cout<<ans<<endl;

        cout<<ans/n+k<<endl;



    }

}


