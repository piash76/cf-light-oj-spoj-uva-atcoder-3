#include<bits/stdc++.h>
using namespace std;

int main()
{
    //cout<<__gcd(6,10)<<endl;
    int g,l,t;
    cin>>t;
    while(t--)
    {
        cin>>g>>l;
       // cout<<l%g<<endl;
        if(l%g!=0)
        {
            cout<<"-1"<<endl;
            continue;
        }
        cout<<g<<" "<<l<<endl;

    }
}
