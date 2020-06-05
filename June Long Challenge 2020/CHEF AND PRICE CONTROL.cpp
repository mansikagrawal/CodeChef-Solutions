/* Link to the problem
                      https://www.codechef.com/JUNE20B/problems/PRICECON */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    while (t--) {
        ll n, p;
        cin >> n >> p;

        ll sum = 0;
        ll gtotal = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            gtotal += x;
            if (x < p)
                sum += x;
            else
                sum += p;
        }
        cout << (gtotal - sum) << "\n";
    }
    // your code goes here
    return 0;
}
