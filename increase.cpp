    #include <bits/stdc++.h>
    using namespace std;

    int main() {

    	int n,m,sum=0,zero=0;
    	cin>>n>>m;
    	int arr[n][m];
    	for(int i=0;i<n;++i)
    	{
    		for(int j=0;j<m;++j)
    		{
    			cin>>arr[i][j];
    		}
    	}


    	for(int j=m-2;j>0;--j)
    	{
    		for(int i=n-2;i>0;--i)
    		{
    			if(arr[i][j]==0)
    			{
    				arr[i][j]=min(arr[i][j+1],arr[i+1][j])-1;

    			}
    		}
    	}


    		for(int i=0;i<n;++i)
    	   {
    		for(int j=1;j<m;++j)
    		{
    		if(arr[i][j]-arr[i][j-1]<=0){
    			cout<<"-1";
    			return 0;
    		}
    		}
           	}

    		for(int j=0;j<m;++j)
    	   {
    		for(int i=1;i<n;++i)
    		{
    		if(arr[i][j]-arr[i-1][j]<=0){
    			cout<<"-1";
    			return 0;
    		}
    		}
           	}
    	for(int i=0;i<n;++i)
    	{
    		for(int j=0;j<m;++j)
    		{

    			sum+=arr[i][j];
    		}

    	}
    	cout<<sum;
    	return 0;
    }
