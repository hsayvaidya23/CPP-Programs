#include <iostream>
#include <climits>
#include <vector>
using namespace std;

#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define setBits(x) __builtin_popcount(x)

signed main() {
    int n, k;
    cin >> n >> k;

    vi a(n);

    rep(i, 0, n)
        cin >> a[i];

    int s = 0, ans = INT_MAX;
    rep(i, 0, k) {
        s += a[i];
    }
    cout << s<< " ";
    ans = min(ans, s);

    // sliding window technique
    rep(i, 1, n - k + 1) {
        s -= a[i - 1];
        s += a[i + k - 1];
        ans = min(ans, s);
        cout << s << " ";
    }
    cout << endl;

    cout << ans << endl;

    return 0;
}
