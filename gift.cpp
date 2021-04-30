#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,cnt=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2!=0)
        {
            cnt++;
        }
    }
    if(cnt==n)
    {
        cout<<"-1"<<endl;
    }
    else
    {

    cout<<cnt<<endl;

    }
}
