#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl '\n'

using namespace std;

int n, a[1005], s, e, res;

void solve() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++) {
            if (a[i] == a[j]) {
                s = i; e = j;
            }
        }
    res = e - s;
    if (res == 0)
        res = -1;
    cout << res << endl;
}

int32_t main() {
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);
    fast();
    solve();
    return 0;
}
