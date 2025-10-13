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
void solve(int n, int k, const string &ops)
{
    vector<char> res(n, '+');

    int left = 0, right = n - 1;

    for (char ch : ops)
    {
        if (ch == '0')
        {
            res[left] = '-';
            left++;
        }
        else if (ch == '1')
        {
            res[right] = '-';
            right--;
        }
        else
        { // ch == '2'
            if (left == right)
            {
                // only one card remains, mark it uncertain and remove
                if (res[left] != '-')
                    res[left] = '?';
                left++;
                right--;
            }
            else
            {
                // mark both ends uncertain if not removed
                if (res[left] != '-')
                    res[left] = '?';
                if (res[right] != '-')
                    res[right] = '?';
                left++;
                right--;
            }
        }
    }

    for (char c : res)
        cout << c;
    cout << '\n';
}

int main()
{
    FAST_IO;

    int T = 1;
    cin >> T; // uncomment for multiple test cases

    while (T--)
    {
        int n, k;
        cin >> n >> k;
        string ops;
        cin >> ops;

        solve(n, k, ops);
    }

    return 0;
}