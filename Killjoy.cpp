
#include<bits/stdc++.h>


const int maxn = 211111;
#define ll long long


using namespace std;


ll a[maxn],b[maxn];

int main()
{
    ll t,i,j;
    cin>>t;
    while(t--)
    {
        ll x,n;
        cin>>n>>x;
        for(i=0;i<n;i++) cin>>a[i];

        sort(a,a+n);
       // for(i=0;i<n;i++) cout<<a[i]<<" ";
        //cout<<endl;

        ll pls=0,mns=0,c=0;
        for(i=0;i<n;i++)
        {
            if(a[i]<x)
            {
                pls+=(abs(x-a[i]));
            }
            else if(a[i]>x)
            {
                mns+=(abs(x-a[i]));
            }
            else if(a[i]==x) c++;

        }
        if(pls==0 and mns==0) cout<<0<<endl;
        else if(pls==mns or c>=1) cout<<1<<endl;
        else
        {
            cout<<2<<endl;
           // cout<<abs(pls-mns)<<endl;
        }




    }



}


