#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,x1,x2,y1,y2,a,b,n;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>x1>>y1>>x2>>y2;

        cin>>n;
        printf("Case %d:\n",i);
        while(n--)
        {
            cin>>a>>b;
            if(a>=x1 && a<=x2 && b>=y1 && b<=y2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
