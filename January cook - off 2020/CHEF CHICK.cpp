/* LInk to the code
             https://www.codechef.com/problems/CHFCHK */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll x, min = INT_MAX;
        for (ll i = 0; i < n; i++) {
            cin >> x;
            if (min > x) {
                min = x;
            }
        }

        cout << min << endl;
    }
    // your code goes here
    return 0;
}
