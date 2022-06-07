#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

using namespace std;

int a, b;

bool soPhongPhu(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0)
            sum += i;
    }
    if (sum > n)
        return 1;
    else
        return 0;
}

void solve() {
    int count = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (soPhongPhu(i) == 1)
            count++;
    }
    cout << count << "\n";
}

int32_t main() {
//    freopen("a.inp", "r", stdin);
//    freopen("a.out", "w", stdout);
    fast();
    solve();
    return 0;
}
