#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int i,j,n,x,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        x=pow(n,4)-(6*n*n*n)+(11*n*n)-(6*n);
        printf("Case %d: %d\n",i,x/24);


    }
}
