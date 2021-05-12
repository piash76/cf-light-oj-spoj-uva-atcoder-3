///Bismillahir Rahmanir Rahim
///ALLAHU AKBAR

#include<bits/stdc++.h>
#define flash() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
#define   sc3(a,b,c)       scanf("%lld %lld %lld",&a, &b, &c)
#define    p1(a)           printf("%lld\n",(a))
#define    p2(a,b)        printf("%lld %lld\n",(a), (b))
#define    p3(a,b,c)      printf("%lld %lld %lld\n",(a), (b), (c))
#define    nl             cout<<"\n"
#define c(x)       cout<<x<<endl
#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl
#define f1(i,a,b)  for(ll i=a;i<b;i++)
#define f2(i,a,b) 	for(ll i=a;i<=b;i++)
#define fr(i,a,b)   for(ll i=a;i>=b;i--)
#define ll long long




using namespace std;


ll bina(ll arr[],ll lo,ll hi,ll value)
{
    ll flag=0;
    while(lo<=hi)
    {
        ll mid=(lo+hi)/2;
        if(arr[mid]==value) {flag=1;break;}
        else if(arr[mid]>value) hi=mid-1;
        else lo=mid+1;
    }
    return flag;

}

int main()
{
    flash()
    ll tst,i,j;
    cin>>tst;
    while(tst--)
    {
        ll na;
        cin>>na;
        ll ar[na+5],br[na+5],cr[na+5];
        f1(i,0,na) cin>>ar[i];
        f1(i,0,na) cin>>br[i];
        f1(i,0,na) cr[i]=ar[i];
        if(ar[0]!=br[0]) cout<<"NO"<<endl;

        else
        {
            ll flags=1,flag1=0;
            f1(i,0,na)
            {
                if(ar[i]!=br[i]) {flag1=1;break;}
            }

            if(flag1=0) flags=1;
            else
            {

            f1(i,1,na)
           {


             if(ar[i]>br[i])
             {
                 sort(cr,cr+i);


                 ll f=bina(cr,0,i-1,-1);

                 if(!f) { flags=0;break;}
             }


             else if(ar[i]<br[i])
             {
                 sort(cr,cr+i);
                 ll f=bina(cr,0,i-1,1);


                 if(!f) { flags=0;break;}

             }


           }
           }

           if(flags) cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
        }

    }



}

