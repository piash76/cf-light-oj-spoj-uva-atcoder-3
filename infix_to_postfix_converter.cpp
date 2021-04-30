#include<bits/stdc++.h>

using namespace std;



struct node
{
    char data;
    struct node *next;
};

class Stack
{
public:
    struct node *top;
    Stack() {top=NULL;}

    void push(char x);
    void  pop();
    char Top();
    void display();

};

void Stack::push(char x)
{
    struct node *t=new node;
    if(top==NULL)
    {
        t->data=x;
        top=t;
    }
    else if(t==NULL) cout<<"STACK OVERFLOW"<<endl;
    else
    {
        t->data=x;
        t->next=top;

        top=t;
    }
}

char Stack::Top()
{
    char x;
     struct node *t=new node;
     t=top;
    if(t==NULL) cout<<"STACK is empty"<<endl;
    else
    {
       x=t->data;
    }

    return x;
}

void Stack::pop()
{
     char x;
     struct node *t=new node;
     t=top;
    if(t==NULL) cout<<"STACK is empty"<<endl;
    else
    {
       x=t->data;
       top=t->next;

       delete t;
    }


}

void Stack::display()
{
    struct node *t=new node;
    t=top;

    while(t)
    {
        cout<<t->data<<endl;
        t=t->next;
    }
}


int pres(char c)
{
    if(c == '^')
    return 3;
    else if(c == '*' || c == '/')
    return 2;
    else if(c == '+' || c == '-')
    return 1;
    else
    return -1;
}

string infix_to_postfix(string infix)
{
    string ans="";

    Stack st;
    st.push('E');

    for(int i=0;i<infix.size();i++)
    {
        if( (infix[i]>='a' and infix[i]<='z') or (infix[i]>='A' and infix[i]<='Z') )  ///alphabet
        {
            ans+=infix[i];
        }
        else if(infix[i]=='(') ///first open bracket
        {
             st.push('(');
        }
        else if(infix[i]==')') ///first close bracket
        {
            while(st.Top()!='E' and st.Top()!='(')
            {
                char ch=st.Top();
                st.pop();
                ans+=ch;
            }

            if(st.Top()=='(')
            {
                char ch=st.Top();
                st.pop();
            }
        }
        else                  ///its definitely operator
        {
            while( st.Top()!='E' and pres(st.Top())>=pres(infix[i]) )   ///jotokjhon porjonto infix er pres stack top er soman or boro thake
            {
                char ch=st.Top();
                st.pop();
                ans+=ch;
            }

            st.push(infix[i]);
        }
    }


    while(st.Top()!='E')
    {
        char c = st.Top();
        st.pop();
        ans+=c;
    }



    return ans;

}







int main()
{
    string infix;
    cin>>infix;

    string postfix=infix_to_postfix(infix);

    cout<<postfix<<endl;


    return 0;

}
