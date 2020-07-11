/* Link to the problem 
            https://www.codechef.com/JUNE20B/problems/XYSTR */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    while (t--) {

        string str;
        ll ans = 0;
        cin >> str;
        for (int i = 1; i < str.size(); i++) {
            if ((str[i] == 'x' and str[i - 1] == 'y') or (str[i] == 'y' and str[i - 1] == 'x')) {
                ans++;

                i++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
