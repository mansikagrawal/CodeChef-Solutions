
/* The link to the problem
        https://www.codechef.com/problems/COVIDLQ   */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 1; i <= n; i++) {

            int x;
            cin >> x;
            if (x == 1) {
                v.push_back(i);
            }
        }
        string ans = "YES";
        for (int i = 0; i + 1 < v.size(); i++) {
            if (v[i + 1] - v[i] < 6) {
                ans = "NO";
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
