ll int fastExpo(ll int a,ll int b)
{
    if(b==0)
        return 1;

    if(b==1)
        return a;

    ll int ans;

    if(b%2==0)
    {
        ll int temp = fastExpo(a,b/2);

        ans = temp*temp;
    }
    else
    {
        ll int temp = fastExpo(a,(b-1)/2);

        ans = a*temp*temp;
    }

    return ans;
}