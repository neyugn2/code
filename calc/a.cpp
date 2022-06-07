#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl '\n'

using namespace std;

int a[5], b[5], c[5], d[5];

void solve() {
    for (int i = 1; i <= 3; i++)
        cin >> a[i]; 
    for (int i = 1; i <= 3; i++)
        cin >> b[i];
    c[1] = a[1] + a[2] - a[3];
    c[2] = a[1] + a[3] - a[2];
    c[3] = a[2] + a[3] - a[1];
    if (c[1] == 0 || c[2] == 0 || c[3] == 0)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    d[1] = b[1] + b[2] - b[3];
    d[2] = b[1] + b[3] - b[2];
    d[3] = b[2] + b[3] - b[1];
    if (d[1] == 0 || d[2] == 0 || d[3] == 0)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}

int32_t main() {
//    freopen("a.inp", "r", stdin);
//    freopen("a.out", "w", stdout);
    fast();
    solve();
    return 0;
}
