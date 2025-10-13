#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

// Aliases
#define ll long long
#define ld long double
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) ((int)(x).size())

// Constants
const int MOD = 1e9 + 7;
const int INF = 1e9 + 5;
const ll LINF = 1e18;

// solve function for each test case
void solve()
{
    int n;
    cin >> n;

    vector<int> vec(n);
    vector<int> prog, math, pe;

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        if (vec[i] == 1)
            // 1-based index
            prog.pb(i + 1);
        else if (vec[i] == 2)
            math.pb(i + 1);
        else if (vec[i] == 3)
            pe.pb(i + 1);
    }

    int teamCount = min({sz(prog), sz(math), sz(pe)});
    cout << teamCount << "\n";

    for (int i = 0; i < teamCount; i++)
    {
        cout << prog[i] << " " << math[i] << " " << pe[i] << "\n";
    }
}

int main()
{
    FAST_IO;

    int T = 1;
    // cin >> T; // Uncomment if multiple test cases

    while (T--)
    {
        solve();
    }

    return 0;
}