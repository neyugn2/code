#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl '\n'

using namespace std;

int n, t[100005], r[100005], f[100005];

void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> t[i];
    for (int i = 1; i <= n - 1; i++)
        cin >> r[i];
    f[1] = t[1];
    for (int i = 2; i <= n; i++)
        f[i] = min(f[i-1] + t[i], f[i-2] + r[i-1]);
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
