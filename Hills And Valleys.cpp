

///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second

#define  mp  make_pair
#define  pb  push_back




using namespace std;

const ll inf=1e18;
const int mod=1e9+7;
const int M=300005;

ll a[M],n;

bool ishil(ll idx)
{
    return (idx-1>=0 and a[idx]>a[idx-1] and idx+1<n and a[idx]>a[idx+1]);
}

bool isval(ll idx)
{
    return (idx-1>=0 and a[idx]<a[idx-1] and idx+1<n and a[idx]<a[idx+1]);
}


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll t,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;

        for(i=0;i<n;i++) cin>>a[i];

        ll s=0;

        for(i=1;i<n-1;i++)
        {
            if(a[i]>a[i-1] and a[i]>a[i+1]) s++;
            else if(a[i]<a[i-1] and a[i]<a[i+1]) s++;
        }

        ll ans=s;

        for(i=1;i<n-1;i++)
        {
            ll temp=a[i];
            ll c=0;
            if(ishil(i) or isval(i)) c++;
            if(ishil(i+1) or isval(i+1)) c++;
            if(ishil(i-1) or isval(i-1)) c++;

            ll cnt=s-c;

            ll c2=0,c3=0;
            a[i]=a[i-1];
            if(ishil(i) or isval(i)) c2++;
            if(ishil(i+1) or isval(i+1)) c2++;
            if(ishil(i-1) or isval(i-1)) c2++;

            ll cnt2=cnt+c2;
            ans=min(ans,cnt2);


            a[i]=a[i+1];
            if(ishil(i) or isval(i)) c3++;
            if(ishil(i+1) or isval(i+1)) c3++;
            if(ishil(i-1) or isval(i-1)) c3++;

            ll cnt3=cnt+c3;
            ans=min(ans,cnt3);



            a[i]=temp;
        }


        cout<<ans<<endl;






    }

    return 0;

}





