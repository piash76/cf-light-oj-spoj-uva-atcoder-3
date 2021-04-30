ll factmod(ll n, ll p)
{
    ll power = 0;
    while(n)
    {
        power += n/p;
        n /= p;
    }
    return power;
}
