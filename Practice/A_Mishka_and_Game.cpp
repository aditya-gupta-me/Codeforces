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
    // cin >> T; // uncomment for multiple test cases

    while (T--)
    {
        int n;

        cin >> n;

        int sumM = 0, sumC = 0;

        for (int i = 0; i < n; i++)
        {
            int m, c;

            cin >> m >> c;

            if (m > c)
            {
                sumM++;
            }
            else if (m < c)
            {
                sumC++;
            }
        }

        if (sumM > sumC)
        {
            cout << "Mishka";
        }
        else if (sumM < sumC)
        {
            cout << "Chris";
        }
        else if (sumM == sumC)
        {
            cout << "Friendship is magic!^^";
        }

        // solve();
    }

    return 0;
}