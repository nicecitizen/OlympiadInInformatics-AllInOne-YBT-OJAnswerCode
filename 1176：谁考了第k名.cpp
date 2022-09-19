#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5 + 10;
const int MOD = 1e9 + 7;
#define endl '\n'
#define PY puts("Yes")
#define PN puts("No")
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    pair<double, int> a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i].second >> a[i].first;
    sort(a, a + n);
    reverse(a, a + n);
    printf("%d %g", a[k - 1].second, a[k - 1].first);
    return 0;
}
