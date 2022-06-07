#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

using namespace std;

char a[100005], b[100005];

void solve() {
    int count = 0;
    cin >> a >> b;
    int i = 0;
    while (a[i] != 0) {
        if (a[i] == b[i])
            count++;
        i++;
    }
    if (count == i)
        cout << "Yes\n";
    else
        cout << "No\n";
}

int32_t main() {
//    freopen("a.inp", "r", stdin);
//    freopen("a.out", "w", stdout);
    fast();
    solve();
    return 0;
}
