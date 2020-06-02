/* Link to the problem
      https://www.codechef.com/problems/CARSELL */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll arr[n];

        for (ll i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n, greater<int>());

        ll ans = 0;
        for (int i = 0; i < n; i++) {
            ans += max(0ll, arr[i] - i);
            ans %= mod;
        }

        cout << ans << "\n";
    }
    return 0;
}
