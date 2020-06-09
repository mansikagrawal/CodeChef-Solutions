/* Link to the problem 
        https://www.codechef.com/JUNE20B/problems/EVENM */

/* Approach applied will be to print the array in S shaped manner */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    ll count = 1;
    while (t--) {

        ll x;
        cin >> x;

        ll arr[x][x];

        int count = 1;
        for (ll i = 0; i < x; i++) {

            if (i % 2 == 0) {
                for (int j = 0; j < x; j++) {
                    arr[i][j] = count;
                    count += 1;
                }
            }
            else {
                for (int j = x - 1; j >= 0; j--) {
                    arr[i][j] = count;
                    count += 1;
                }
            }
        }

        for (int i = 0; i < x; i++) {
            for (int j = 0; j < x; j++) {
                cout << arr[i][j] << " ";
            }
            cout << "\n";
        }
    }
    // your code goes here
    return 0;
}
