#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//#define int long long
#define endl '\n'

using namespace std;

char a[105];
int x, f[30], sum, alt;

void solve() {
    sum = 0;
    cin >> a >> x;
    for (int i = 0; i <= 25; i++) {
        f[i] = x;
        x++;
        if (x == 26)
            x = 0;
    }
    int j = 0;
    while (a[j] != 0) {
        alt = a[j] - 97;
        sum += f[alt];
        j++;
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
