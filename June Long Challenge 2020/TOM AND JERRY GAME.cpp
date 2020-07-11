/* Link to the problem      
        https://www.codechef.com/JUNE20B/problems/EOEO */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll findans(ll ts)
{

    ll js = 1;
    while (ts % 2 == 0) {
        js *= 2;

        ts /= 2;
    }
    js *= 2;
    return js;
}

int main()
{
    ll t;
    cin >> t;
    while (t--) {
        ll js = 0;
        ll ts;
        cin >> ts;
        if (ts & 1)
            js = (ts - 1) / 2;
        else {
            ll x = findans(ts);
            if (x <= ts) {
                js = ts / x;
            }
            //cout<<js<<endl;
        }
        cout << js << endl;
    }
  
    return 0;
}
