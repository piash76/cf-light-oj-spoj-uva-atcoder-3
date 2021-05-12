    ///Bismillahir Rahmanir Rahim
    #include<bits/stdc++.h>
    #define int long long
    using namespace std;
    int s=0,mx=0;
    int a[100009];
    main()
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            s+=a[i];
            mx=max(mx,a[i]);
        }
        if(s%2==0 && s-mx>=mx)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
