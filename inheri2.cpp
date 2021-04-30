#include<bits/stdc++.h>
using namespace std;
class Marks
{  public:
    int roll_nmbr;
    static int total;
    static int total_nmbr;
    string name;
    void getinfo()
    {
        cin>>name;
        cin>>roll_nmbr;
    }
    void display()
    {   cout<<name<<endl;
    cout<<roll_nmbr<<endl;
    }
};
class Physics:public Marks
{  public:
    int phy;
    void getmarks()
    {
        cin>>phy;
        total=total+phy;
        total_nmbr=total_nmbr+phy;
    }
};
class Chemistry:public Marks
{  public:
    int chem;
    void getmarks()
    {
        cin>>chem;
        total=total+chem;
        total_nmbr=total_nmbr+chem;
    }
};
class Math:public Marks
{  public:
    int math;
    void getmarks()
    {
        cin>>math;
        total=total+math;
        total_nmbr=total_nmbr+math;
    }
};
int Marks::total;
int Marks::total_nmbr;
int main()
{ int n;
int i;
cin>>n;
int st_total[n];
    Physics p[n];
    Chemistry c[n];
    Math m[n];
    Marks m1[n];
    for(i=0;i<n;i++)
    {  printf("Enter marks of student no: %d",i+1);
    cout<<endl;
    m1[i].getinfo();
        p[i].getmarks();
        c[i].getmarks();
        m[i].getmarks();
        st_total[i]=m1[i].total;
        m1[i].total=0;
    }
for(i=0;i<n;i++)
{
    m1[i].display();
    cout<<st_total[i]<<endl;
}
cout<<"average nmbr of class:"<<m[n-1].total_nmbr/n;
}
