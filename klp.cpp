#define int long long
using namespace std;
vector<int>ans;
int k;
int chk(int x)
{    int c=0;
     for(int i=0;i<x;i++)
    {
        c+=(ans[x-1]-ans[i]);
    }
    if(c<=k)
    {
        return 1;
    }
    else
        return 0;
}
int a[200009];
main()
{
    int n;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    sort(a,a+n);
    int tmp=n/2;
    for(int i=tmp;i<n;i++)
    {
        ans.push_back(a[i]);
    }
    int lo=2,hi=tmp+1,mid;
    while(hi-lo>=2)
    {
        mid=(lo+hi)/2;
        if(chk(mid)==1)
        {
            lo=mid;
        }
        else
        {
            hi=mid-1;
        }

    }
    int mx=1;
    for(int i=lo;i<=hi;i++)
    {
        if(chk(i)==1)
        {
            mx=max(mx,i);
        }
    }
    //cout<<mx<<endl;
    int cost=0,ex;
    for(int i=0;i<mx;i++)
    {
        cost+=(ans[mx-1]-ans[i]);
    }
    ex=k-cost;
    ans[mx-1]+=(ex/mx);
    cout<<ans[mx-1]<<endl;
    return 0;

}
