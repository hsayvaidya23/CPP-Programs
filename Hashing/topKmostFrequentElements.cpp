#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++) // Fix the loop definition

using namespace std;

signed main() {
    int n, k; // Add 'k' to the input
    cin >> n >> k;

    vi a(n);
    rep(i, 0, n)
        cin >> a[i];

    map<int, int> freq;

    rep(i, 0, n) {
        int presentSize = freq.size();
        if (freq[a[i]] == 0 && presentSize == k)
            break;

        freq[a[i]]++;
    }

    vii ans;
    map<int, int>::iterator it;
    for (it = freq.begin(); it != freq.end(); it++) {
        if (it->second != 0) { // Use it->second instead of it->ss
            pii p;
            p.first = it->second; // Use first and second instead of ff and ss
            p.second = it->first;
            ans.push_back(p);
        }
    }

    sort(ans.begin(), ans.end(), greater<pii>());

    vii::iterator it1;
    for (it1 = ans.begin(); it1 != ans.end(); it1++) {
        cout << it1->second << "  " << it1->first << endl;
    }

    return 0;
}
