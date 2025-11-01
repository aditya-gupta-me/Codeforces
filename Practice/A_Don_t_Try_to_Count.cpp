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
void solve(int lenX, int lenS, string x, string s)
{
    // find the substr in x
    size_t p = x.find(s);
    if (p != string::npos)
    {
        cout << 0 << "\n";
        return;
    }

    string result = x;
    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        result += result;
        count++;
        size_t pos = result.find(s);
        if (pos != string::npos)
        {
            cout << count << "\n";
            return;
        }
    }

    cout << -1 << "\n";
}

int main()
{
    FAST_IO;

    int T = 1;
    cin >> T; // uncomment for multiple test cases

    while (T--)
    {
        int lenX, lenS;
        cin >> lenX >> lenS;

        cin.ignore();

        string x;
        string s;

        getline(cin, x);
        getline(cin, s);

        solve(lenX, lenS, x, s);
    }

    return 0;
}