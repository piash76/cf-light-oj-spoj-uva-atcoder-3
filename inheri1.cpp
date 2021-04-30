#include<bits/stdc++.h>
using namespace std;
class Fruit
{  protected:
   static int c;
    public:
    void totalfruit()
    { cout<<"total fruit:"<<endl;
        cout<<c<<endl;
    }
};
class Apple:public Fruit
{
public:
    int a;
  void countapple()
  { cout<<"number of apples:"<<endl;
    cin>>a;
  c=c+a;

  }
};
class Mangoes:public Fruit
{
public:
int m;
    void countmangoes()
    { cout<<"number of mangoes:"<<endl;
        cin>>m;
    c=c+m;
    }
};
int Fruit::c;
int main()
{
Mangoes a;
Apple b;
a.countmangoes();
b.countapple();
b.totalfruit();
}
