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
               if(i==t/2 && j==t/2)
               {
                   cout<<"B";
               }
    		   else if((i+j)%2==0 &&(i!=t/2 && j!=t/2))
               {
                   cout<<"W";
               }
               else
               {
                   cout<<"B";
               }
    		}
    		cout<<endl;
    	}
    }
