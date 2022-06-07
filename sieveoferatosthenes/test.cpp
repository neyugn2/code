#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    int n;
    cin >> n;
    bool prime[n+5];
    memset (prime, 1, sizeof(prime));
    for (int i = 2; i * i <= n; i++)
        if (prime[i])
            for (int j = i * i; j <= n; j += i)
                prime[j] = 0;
    for (int i = 2; i <= n; i++)
        if (prime[i])
            cout << i << endl;
    return 0;
}
