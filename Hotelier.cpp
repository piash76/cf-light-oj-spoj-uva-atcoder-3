#include<bits/stdc++.h>
#define ll long long
#define see_you return 0
#define godspeed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e9
using namespace std;

int main()
{
    godspeed()
    int n,i,j,k,l,m;
    int a[10];
    memset(a,0,sizeof(a));
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='L')
        {
           for(k=0;k<10;k++)
           {
               if(a[k]==0)
               {
                   a[k]=1;
                   break;
               }

           }
        }
        else if(s[i]=='R')
        {
            for(k=9;k>=0;k--)
           {
               if(a[k]==0)
               {
                   a[k]=1;
                   break;
               }

           }
        }
        else
        {
            j=s[i]-'0';
            //cout<<j<<endl;
            a[j]=0;
        }
    }
    for(i=0;i<10;i++) cout<<a[i];

    see_you;
}
