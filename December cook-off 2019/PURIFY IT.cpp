
/* Link to the problem
        https://www.codechef.com/problems/PRFYIT */

/*
        -->We can have a sequence of continous 1's , 0's , 1's. or
        0's , 1's , 0's.
        --> We can have an O(n^2) solution because of constraints. */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int arr[100000];
int main()
{
    ll t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        ll n = str.length(), maxblock = 0;
        // Storing the count of one's before and till every index in string
        for (ll i = 0; i < n; i++) {
            arr[i + 1] = arr[i];
            if (str[i] == '1')
                arr[i + 1]++;
        }

        for (ll i = 0; i < n; i++) {
            for (ll j = i + 1; j <= n; j++) {
                /* 010 format */
                maxblock = max(maxblock,
                    /* NO. of zeros before left boundary */ (i - arr[i]) +
                        /* NO. of ones in the range */ (arr[j] - arr[i]) +
                        /* NO. of zeros after right boundary */ (n - j - (arr[n] - arr[j])));

                /* 101 format */
                maxblock = max(maxblock,
                    /* NO. of ones before left boundary */ arr[i] +
                        /* NO. of zeros between range */ (j - i - (arr[j] - arr[i])) +
                        /*  NO. of ones after right boundary */ (arr[n] - arr[j]));
            }
        }

        cout << (n - maxblock) << endl;
        memset(arr, 0, 100000);
    }
    return 0;
}
