#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100]={0},c=1,k=-1,l,j,i,m;
    string s;
    char ch,maxch;
    cin>>s;
    l=s.size();
    sort(s.begin(),s.end());
    ch=s[0];

    for(i=1;i<l;i++)
    {
      if(ch==s[i])
      {
          c++;
      }
      else
      {
          if(c>k)
          {
              k=c;
              maxch=ch;
              //cout<<maxch<<endl;

          }
          ch=s[i];
          m=i;
          c=1;


      }

    }
    cout<<maxch<<endl;
}
