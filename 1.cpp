#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

int main()
{
    ll ans=0;
    for(ll i=3;i<1000;i++)
        if(!(i%3 && i%5))ans+=i;
    cout<<ans;
    return 0;
}