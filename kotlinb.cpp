#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,cnt=0,b=0,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=2;i<n;i++)
    {
       for(j=0;j<i;j++)
       {
           if(a[j]>a[i])
           {
               cnt++;
           }

       }
       if(cnt>=2)
       {
           b++;
       }
       cnt=0;
    }

    cout<<b<<endl;
}
