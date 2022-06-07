#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl '\n'

using namespace std;

int n, a[100005], f[100005];

void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    f[1] = 0;
    f[2] = abs(a[1] - a[2]);
    for (int i = 3; i <= n; i++)
        f[i] = min(f[i-2] + abs(a[i] - a[i-1]), f[i-1] + abs(a[i] - a[i-1]));
    cout << f[n] << endl;
}

int32_t main()
{
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);
    fast();
    solve();
    return 0;
}
