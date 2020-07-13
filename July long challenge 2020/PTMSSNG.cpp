#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {


ll t;
cin>>t;
while(t--)
{
    unordered_set<ll> start,ends;
    ll n;
    cin>>n;
    for(ll i=0;i<4*n-1;i++)
    {
        ll s,e;
        cin>>s>>e;
        if(start.find(s)!=start.end())
        {
            start.erase(s);
        }
        else
        {
            start.insert(s);
        }
        if(ends.find(e) != ends.end())
        {
            ends.erase(e);
        }
        else
        {
            ends.insert(e);
        }
    }
    cout << *start.begin() << " " << *ends.begin() << endl;
}
	return 0;
}
