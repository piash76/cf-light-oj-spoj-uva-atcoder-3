#include<bits/stdc++.h>
#define ll long long
using namespace std;

int dp[1000][40];
int mw,n;
vector<int> price,weight;

int knapsack(int i, int w)
{
    if(i == n)return 0;
    int price1, price2;
    if(dp[i][w] != -1)return dp[i][w];
    if(w+weight[i] <= mw)price1 = price[i] + knapsack(i+1, w+weight[i]);//checking if the next object can also be fit
    else price1 = 0;
    price2 = knapsack(i+1,w);//taking the next object without taking the previous object
    return dp[i][w] = max(price1,price2);
}

int main()
{
    int t,i,p,w,f,ans;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>p>>w;
            price.push_back(p);
            weight.push_back(w);
        }
        cin>>f;
        for(i=1;i<=f;i++)
        {
            memset(dp,-1,sizeof(dp));
            cin>>mw;
            ans+=knapsack(0,0);
        }
        cout<<ans<<endl;
        price.clear();
        weight.clear();

    }
    return 0;
}
