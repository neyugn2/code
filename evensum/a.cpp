#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl '\n'

using namespace std;

int n, a[100005];

void solve() {
    int sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0)
            sum += a[i];
    }
    cout << sum << endl;
}

int32_t main() {
//    freopen("a.inp", "r", stdin);
//    freopen("a.out", "w", stdout);
    fast();
    solve();
    return 0;
}
