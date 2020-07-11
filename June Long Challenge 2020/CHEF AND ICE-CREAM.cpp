/* Link to the problem 
            https://www.codechef.com/JUNE20B/problems/CHFICRM */

#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool icecream()
{

    ll n;
    cin >> n;
    bool ans = true;
    unordered_map<ll, ll> mp;
    mp[5] = 0;
    mp[10] = 0;
    mp[15] = 0;

    ll cash = 0;

    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        cash = 15;

        if (cash >= (x - 5)) {
            mp[x] += 1;
            if ((x - 5) == 0)
                continue;

            if (mp[x - 5] > 0)
                mp[x - 5] -= 1;
            else if (mp[x - 10] > 1)
                mp[x - 10] -= 2;
            else
                ans = false;

            cash += 5;
        }
        else
            ans = false;
    }

    return ans;
}

int main()
{
    ll t;
    cin >> t;
    while (t--) {
        bool ans = icecream();
        if (ans)
            std::cout << "YES" << std::endl;
        else
            cout << "NO\n";
    }

    return 0;
}
