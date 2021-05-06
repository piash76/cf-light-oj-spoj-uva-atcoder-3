ll same_digit(ll n)
{
    ll s = 0,tmp=0;

    ll r= log10(n) + 1;

    for (ll i = 0; i <r; i++)
    {
        tmp = tmp * 10 + 1;

        for (ll j = 1; j <= 9; j++)
        {
            if ((tmp * j) <= n)
            {
                s++;
            }
        }
    }

    return s;


}
