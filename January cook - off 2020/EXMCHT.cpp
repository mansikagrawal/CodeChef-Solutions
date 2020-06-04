/* Link to the problem
               https://www.codechef.com/problems/EXAMCHT   */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    while (t--) {
        ll r1, r2;
        cin >> r1 >> r2;
        ll count = 0;
        ll diff = abs(r2 - r1);
        for (ll i = 1; i <= sqrt(diff); i++) {
            if (diff % i == 0) {
                if (diff / i == i)
                    count += 1;
                else
                    count += 2;
            }
        }
        cout << count << endl;
    }
    // your code goes here
    return 0;
}
