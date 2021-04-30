#include<stdio.h>
int main()
{
    int num1,num2,n1,n2,rem,gcd,lcm;
    printf("enter two n0:");
    scanf("%d %d",&num1,num2);

    n1=num1;
    n2=num2;

    while(n2!=0)
    {
        rem =n1%n2;
        n1=n2;
        n2=rem;
    }
    gcd=n1;
    lcm=(num1*num2)/n1;
    printf("GCD IS %d",gcd);
    printf("LCD IS %d",lcm);


}
