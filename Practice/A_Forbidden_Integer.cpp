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
void solve()
{
    // yo start from here,
    // don't worry, you gonna solve this one too
}

int main()
{
    FAST_IO;

    int T = 1;
    cin >> T; // uncomment for multiple test cases

    while (T--)
    {
        ll n, k, x;

        cin >> n >> k >> x;

        // x == 1 & k == 1
        //

        if (x != 1)
        {
            cout << "YES\n";
            cout << n << "\n";

            for (int i = 1; i <= n; i++)
            {
                cout << 1 << " ";
            }

            cout << "\n";
        }
        else
        {
            if ((k == 2 && n % 2 == 1) || k == 1)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
                if (n % 2 == 0)
                {
                    cout << n / 2 << "\n";
                    for (int i = 1; i <= n / 2; i++)
                    {
                        cout << 2 << " ";
                    }
                    cout << "\n";
                }
                else
                {
                    cout << (n - 3) / 2 + 1 << "\n";
                    for (int i = 1; i <= (n - 3) / 2; i++)
                    {
                        cout << 2 << " ";
                    }
                    cout << 3 << "\n";
                }
            }
        }
        // solve();
    }

    return 0;
}