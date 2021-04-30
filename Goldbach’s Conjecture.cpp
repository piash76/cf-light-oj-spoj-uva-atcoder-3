#include<bits/stdc++.h>
#define n 1000000
using namespace std;

bool isprime[1000000];
long long prime[1000000],j=0;

void sieve()
{

    long long sq=sqrt(n);
    isprime[2]=0; //0 indicates prime or true
    for(long long i=4;i<=n;i+=2) isprime[i]=1;
    for(long long i=3;i<=sq;i+=2)
    {
        if(isprime[i]==0)
        {
            for(j=i*i;j<=n;j+=i)isprime[j]=1;
        }
    }


}

int main()
{
    sieve();
    int i,j,f,a,x,y;
    for(i=1;i<=100;i++)
    {
        if(isprime[i]==0)c++;
    }
     cout<<c<<endl;

    /*while(1)
    {
        f=0;
        cin>>a;
        if(a==0)return 0;
        printf("%d:\n",a);
        for(i=2;i<=a/2;i++)
        {
           x=isprime[i];
           if(x==0)
           {
               y=isprime[a-i];//n=a+b
               if(y==0)
               {
                   f=1;
                   printf("%d+%d\n",i,a-i);
                   break;
               }
           }
        }

        if(f==0) printf("NO WAY!\n");



    } */


}
