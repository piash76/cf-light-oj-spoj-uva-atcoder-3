#include<bits/stdc++.h>
using namespace std;

/*void printknapSack(int W, int wt[], int val[], int n)
{
	int i, w;
	int K[n + 1][W + 1];

	// Build table K[][] in bottom up manner
	for (i = 0; i <= n; i++) {
		for (w = 0; w <= W; w++) {
			if (i == 0 || w == 0)
				K[i][w] = 0;
			else if (wt[i - 1] <= w)
				K[i][w] = max(val[i - 1] +
					K[i - 1][w - wt[i - 1]], K[i - 1][w]);
			else
				K[i][w] = K[i - 1][w];
		}
	}

	// stores the result of Knapsack
	int res = K[n][W];
	//printf("%d\n", res);
	cout<<res<<endl;

	w = W;
	for (i = n; i > 0 && res > 0; i--) {

		/// either the result comes from the top
		/// (K[i-1][w]) or from (val[i-1] + K[i-1]
		/// [w-wt[i-1]]) as in Knapsack table. If
		/// it comes from the latter one/ it means
		///the item is included.
		if (res == K[i - 1][w])
			continue;
		else {

			// This item is included.
			//printf("%d ", wt[i - 1]);
			cout<<i<<" ";

			// Since this weight is included its
			// value is deducted
			res = res - val[i - 1];
			w = w - wt[i - 1];
		}
	}
}*/


///https://www.youtube.com/watch?v=8LusJS5-AGo


int wt[12345], val[12345];

///O(N*W). capacity*number of weight element

///where ‘N’ is the number of weight element and ‘W’ is capacity. As for every weight element we traverse through all weight capacities 1<=w<=W.
int Knapsack(int w, int wt[], int val[], int n)
{
    int k[n+1][w+1];

    for(int i = 0; i <= n; i++)  /// i representing the ith value
    {
        for(int j = 0; j <= w; j++)   ///j representing capacity
        {
            if(i == 0 || j == 0)k[i][j] = 0;
            else if(wt[i-1] <= j)
                { k[i][j] = max(val[i-1]+k[i-1][j-wt[i-1]], k[i-1][j]); }///comparison between if i take the (i-1)th value then remaining
                ///capacity will be j-wt[i-1] then with this capacity what is the maximum value had been taken from previous
                /// value
            else k[i][j] = k[i-1][j]; ///else we are not taking the (i-1)th value and for this
           /// with this capacity what is the maximum value had been taken from previous
                /// value
        }
    }
   // return k[n][w];

    int res = k[n][w];
	//printf("%d\n", res);
	cout<<"MAX "<<endl;
	cout<<res<<endl;

	cout<<"ITEMS "<<endl;

	int w1 = w;
	for (int i = n; i > 0 && res > 0; i--) {

		/// either the result comes from the top
		/// (K[i-1][w]) or from (val[i-1] + K[i-1]
		/// [w-wt[i-1]]) as in Knapsack table. If
		/// it comes from the latter one/ it means
		///the item is included.
		if (res == k[i - 1][w])  ///check if it comes from top
        {
           // cout<<"I-1 "<<i-1<<" w "<<w<<endl;
            //cout<<k[i-1][w]<<endl;
            continue;
        }

		else {

			// This item is included.
			//printf("%d ", wt[i - 1]);
			//cout<<i-1<<" ";
			cout<<"ITEM NO "<<i-1<<" ITEM "<<wt[i-1]<<endl;
			cout<<"I-1 "<<i-1<<" w "<<w<<endl;
            //cout<<k[i-1][w]<<endl;

			// Since this weight is included its
			// value is deducted
			res = res - val[i - 1];
			w = w - wt[i - 1];
		}
	}

	return 0;
}




int main()
{

        int n,cap;

        scanf("%d %d",&cap,&n);

        //cout<<n<<" "<<cap<<endl;

        for(int i = 0; i < n; i++)
        {
            scanf("%d %d",&wt[i], &val[i]);
        }

        for(int i = 0; i < n; i++)
        {
            cout<<val[i]<<" "<<wt[i]<<endl;
        }



        int ans=Knapsack(cap,wt,val,n);

        cout<<ans<<endl;

       /* int k,W;
        scanf("%d",&k);
        int ans =0;
        while(k--)
        {
            int x;
            scanf("%d",&x);
            ans += Knapsack(x, wt, val, n);
        }
        printf("%d\n", ans);*/
    return 0;
}

/*

4 7
1 1
4 3
5 4
7 5

*/
