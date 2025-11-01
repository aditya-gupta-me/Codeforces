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
void solve(int n, int q, string s)
{
    bool allA = true;

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == 'B')
        {
            allA = false;
            break;
        }
    }

    for (int i = 0; i < q; ++i)
    {
        ll a;
        cin >> a;

        if (allA)
        {
            cout << a << "\n";
        }
        else
        {
            ll time = 0;
            ll currA = a;

            while (currA > 0)
            {
                time++;
                ll idx = (time - 1) % n;

                if (s[idx] == 'A')
                {
                    currA--;
                }
                else
                {
                    currA /= 2;
                }
            }
            cout << time << "\n";
        }
    }
}

int main()
{
    FAST_IO;

    int T = 1;
    cin >> T; // uncomment for multiple test cases

    while (T--)
    {
        int n, q;
        cin >> n >> q;

        string s;
        cin >> s;
        solve(n, q, s);
    }

    return 0;
}