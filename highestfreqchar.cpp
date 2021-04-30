#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,c=1;
    string s;
    cin>>s;
    sort(s.begin(),s.end());

    char ch=s[0],maxc;
    int mini=-1;
    for(i=1;i<s.size();i++){
        if(ch==s[i]){
            c++;
        }
        else {
            if(c>mini) {
                maxc=ch;
                mini=c;
            }
            ch=s[i];
            c=1;
        }
    }
    cout<<maxc<<endl;



}
