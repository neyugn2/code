#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

using namespace std;

int s1, s2, s3, tmp, res, num_max;
vector <int> f(100);

void solve()
{
    tmp = 0;
    cin >> s1 >> s2 >> s3;
    for (int i = 1; i <= s1; i++)
        for (int j = 1; j <= s2; j++)
            for (int k = 1; k <= s3; k++)
            {
                tmp = i + j + k;
                f[tmp]++;
            }
    num_max = *max_element(f.begin(), f.end());
    int i = 0;
    for (auto x:f)
    {
        if (num_max == x)
        {
            res = i;
            break;
        }
        i++;
    }
    cout << res << endl;
}

int32_t main()
{
    //freopen("a.inp", "r", stdin);
    //freopen("a.out", "w", stdout);
    fast();
    solve();
    return 0;
}
