#include<iostream>
#define ll long long

using namespace std;

int main()
{
    int a,b,c,i,j,k,n,q,s;
    while(cin>>n)
    {
        s=0;
        if(n==0)
        {
            break;
        }
        for(i=n;i>=1;i--)
        {
            s+=(i*i);
        }
        cout<<s<<endl;
    }


}
