





///PROBLEM DESCRIPTION:


#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



#define ll long long
#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl
#define ff                      first
#define ss                      second

using namespace std;




const int mod = 1000000007;


const int mx =1000009;///1e6
ll a[mx];


int main()
{


    speed()

    ll t,i,j,cas=0;

    string s;cin>>s;
    ll n=s.size();

    transform(s.begin(), s.end(), s.begin(), ::toupper);

   // cout<<s<<endl;

    string kan="KANGAROO";
    string kiwi="KIWIBIRD";

    ll ka=0,ki=0;

    for(i=0;i<n;i++)
    {
        for(j=0;j<kan.size();j++)
        {
            if(kan[j]==s[i]) ka++;
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<kiwi.size();j++)
        {
            if(kiwi[j]==s[i]) ki++;
        }
    }

    if(ka>ki) cout<<"Kangaroos"<<endl;
    else if(ka<ki) cout<<"Kiwis"<<endl;
    else if(ka==ki) cout<<"Feud continues"<<endl;


    return 0;

}




