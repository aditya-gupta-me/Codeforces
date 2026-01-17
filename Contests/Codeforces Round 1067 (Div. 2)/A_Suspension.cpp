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

// solve function for each test case
void solve(int n, int y, int r)
{
    int susR = min(r, n);
    int remP = n - susR;

    int susY = min(y / 2, remP);

    cout << susR + susY << "\n";
}

int main()
{
    FAST_IO;

    int T = 1;
    cin >> T; // uncomment for multiple test cases

    while (T--)
    {
        int n, y, r;
        cin >> n >> y >> r;

        solve(n, y, r);
    }

    return 0;
}