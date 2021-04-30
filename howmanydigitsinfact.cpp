#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll numofzero(ll num,ll base)
{
    ll a,b,c,d,f,i,p,j,k;
    a=num;
    j=base;
    for(i=2;i<=base;i++)
    {
       if (j % i == 0)
      {
         p = 0;
         while (j % i== 0)
         {
            p++;
            j /= i;
         }
         c = 0;
         k = num;

         while (k/i > 0)
         {
            c += k/i;
            k /= i;
         }
         a = min(a, c/p);
      }
    }
    return a;

}

double ar[1000000];

int main()
{
    ll t,n,b,i,j;
     double ans;
    for(i=1;i<=1000000;i++)
    {
        ar[i]=ar[i-1]+log(i);
    }

        while(cin>>n>>b)
        {

        j=numofzero(n,b);
        cout<<j<<" ";
        ans=ar[n];
        ans/=log(b);
        ans+=1.0;
        ans=floor(ans);
        printf("%.0lf\n",ans);
        }


}
