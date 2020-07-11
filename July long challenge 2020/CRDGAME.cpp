/* Link to the problem 
  https://www.codechef.com/JULY20B/problems/CRDGAME */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll calc(ll n)
{
    ll d, s = 0;
    while (n > 0) {
        ll d = n % 10;
        s += d;
        n /= 10;
    }

    return s;
}

int main()
{
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        ll chef = 0, morty = 0;
        cin >> n;
        ll ans = 0;
        while (n--) {
            ll x, y;
            cin >> x >> y;
            ll a;
            ll b;
            a = calc(x);
            b = calc(y);

            if (a == b) {
                chef++;
                morty++;
            }

            else if (a > b) {
                chef++;
            }
            else {
                morty++;
            }
        }
        if (chef == morty) {
            cout << "2 " << chef << endl;
        }
        else if (chef < morty) {
            cout << "1 " << morty << endl;
        }
        else {
            cout << "0 " << chef << endl;
        }
    }
    return 0;
}
