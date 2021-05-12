#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int N, MW, dp[1003][33];
vector <int> Price, Weight;

int maxValue(int I, int W){
    if(I == N)return 0;
    int Price1, Price2;
    if(dp[I][W] != -1)return dp[I][W];
    if(W+Weight[I] <= MW)Price1 = Price[I] + maxValue(I+1, W+Weight[I]);
    else Price1 = 0;
    Price2 = maxValue(I+1, W);
    return dp[I][W] = max(Price1, Price2);
}

int main(){
    int T, P, W, G;
    cin >> T;
    while(T--){
        cin >> N;
        for(int i = 1; i <= N; i++)cin >> P >> W, Price.push_back(P), Weight.push_back(W);

        /*cin >> G;
        int ans = 0;
        for(int i = 0; i < G; i++)memset(dp, -1, sizeof(dp)), cin >> MW, ans += maxValue(0, 0);
        cout << ans << endl;*/
        Price.clear(), Weight.clear();
    }
    return 0;
}

