#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

using namespace std;

bool check(int n) {
    if (n % 2 == 0 && n % 9 == 0)
        return true;
    return false;
}

void solve() {
    int n, countNum, i;
    countNum = 0;
    i = 1;
    cin >> n;
    while (countNum != n) {
        if (check(i))
            countNum++;
        i++;
    }
    cout << i - 1 << "\n";
}

int32_t main() {
//    freopen("a.inp", "r", stdin);
//    freopen("a.out", "w", stdout);
    fast();
    solve();
    return 0;
}
