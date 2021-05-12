#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll i,j,k,l,m,n;
    cin>>n>>k;
    ll a[n+10];
    for(i=0;i<n;i++)cin>>a[i];
    vector<int>v;
    for(i=1;i<n;i++)
    {
     v.push_back(a[i]-a[i-1]);
    }
    sort(v.begin(),v.end());
    ll ans=0;

    for(i=0;i<=v.size()-k;i++)
    {
        ans+=v[i];
    }
    cout<<ans<<endl;
}
