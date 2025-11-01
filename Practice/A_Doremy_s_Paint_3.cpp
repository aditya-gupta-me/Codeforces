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
    vector<int> vec(n, 0);
    map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    for (int i = 0; i < n; i++)
    {
        m[vec[i]]++;
    }

    if (m.size() >= 3)
    {
        cout << "No" << endl;
    }
    else
    {

        ll freq1 = m.begin()->second;
        ll freq2 = m.rbegin()->second;

        if (freq1 == freq2)
        {
            cout << "Yes" << "\n";
        }
        else if (n % 2 == 1 && abs(freq1 - freq2) == 1)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
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
        int n;
        cin >> n;

        solve(n);
    }

    return 0;
}