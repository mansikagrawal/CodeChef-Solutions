/* Link to the problem
    https://www.codechef.com/JULY20B/problems/CHEFSTR1 */

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
        ll arr[n];
        ll ans = 0;
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (ll i = 0; i + 1 < n; i++) {
            ans += abs(arr[i] - arr[i + 1]) - 1;
        }
        cout << ans << endl;
    }
    // your code goes here
    return 0;
}
