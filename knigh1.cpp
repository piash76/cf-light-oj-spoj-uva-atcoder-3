    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    	int t;
    	cin>>t;
    	for(int i=0;i<t;i++)
    	{
    		for(int j=0;j<t;j++)
    		{
    			if((i+j)%2==0)
    			cout<<"W";
    			else
    			cout<<"B";
    		}
    		cout<<endl;
    	}
    }
