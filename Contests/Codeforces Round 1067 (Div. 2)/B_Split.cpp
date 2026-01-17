#include <bits/stdc++.h>
using namespace std;

// fast I/O
#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

// aliases
#define ll long long
#define ld long double
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) ((int)(x).size())

// constants
const int MOD = 1e9 + 7;
const int INF = 1e9 + 5;
const ll LINF = 1e18;

// debug (uncomment to use)
// #define debug(x) cerr << #x << " = " << x << endl

// solve function for each test case
void solve(int n)
{
    vector<int> freq(2 * n + 1, 0);

    for (int i = 0; i < 2 * n; i++)
    {
        int x;
        cin >> x;
        freq[x]++;
    }

    int cOdd = 0;
    int cEven = 0;

    for (int i = 1; i <= 2 * n; i++)
    {
        if (freq[i] > 0)
        {
            if (freq[i] % 2 != 0)
            {
                cOdd++;
            }
            else
            {
                cEven++;
            }
        }
    }

    int ans = cOdd + 2 * cEven;

    if (cOdd == 0)

        if ((cEven % 2) != (n % 2))
            ans -= 2;

    cout << ans << "\n";
}

int main()
{
    FAST_IO;

    int T = 1;
    cin >> T; // uncomment for multiple test cases

    while (T--)
    {
        int n;
        cin >> n;
        solve(n);
    }

    return 0;
}