#include<bits/stdc++.h>
using namespace std;

int two(int a)
{
    int j,cnt=0;
    while(a!=0)
    {
        for(j=0;;j++)
        {

        int r=pow(2,j);

        if(r==a)
        {
            cnt++;
            a=0;
            break;
        }

        if(abs(r-a)==1)
        {
            cnt=cnt+2;
            a=0;
            break;
        }
        if(r>a)
        {
            int g=pow(2,j-1);
            int e=r-a;
            int f=a-g;
            cnt++;
            a=min(e,f);
            break;
        }

        }
    }
    return cnt;
}


int main()
{
    int t,i,n;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;

        int s=two(n);
        cout<<s<<endl;

    }
}
