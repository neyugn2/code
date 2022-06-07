#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl '\n'

using namespace std;

int n, a[200], b[200];

void solve() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i] >> b[i];
    for (int i = 1; i <= n; i++) {
        if ((a[i] <= 1 && b[i] <= 2) || (a[i] <= 2 && b[i] <= 1))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}

int32_t main() {
//    freopen("a.inp", "r", stdin);
//    freopen("a.out", "w", stdout);
    fast();
    solve();
    return 0;
}
