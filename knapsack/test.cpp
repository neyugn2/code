#include <bits/stdc++.h>

using namespace std;

long long n, w;
long long a[100005], b[100005];
long long dp[105][100005];

void solve()
{
    cin >> n >> w;
    for (int i = 1; i <= n; i++)
        cin >> a[i] >> b[i];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            dp[i][j] = dp[i-1][j];
            if (j - a[i] >= 0)
                dp[i][j] = max(dp[i][j], dp[i-1][j-a[i]] + b[i]);
        }
    }
    cout << dp[n][w] << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    solve();
    return 0;
}
