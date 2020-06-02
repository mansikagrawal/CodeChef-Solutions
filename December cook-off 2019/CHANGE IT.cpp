
/* Link to the question
            https://www.codechef.com/problems/CHNGIT */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--) {

        ll n;
        cin >> n;

        unordered_map<ll, ll> mp;

        for (ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            mp[x]++;
        }

        ll mx = 0;
        for (auto x : mp) {

            mx = max(mx, x.second);
        }

        cout << (n - mx) << "\n";
    }

    return 0;
}
