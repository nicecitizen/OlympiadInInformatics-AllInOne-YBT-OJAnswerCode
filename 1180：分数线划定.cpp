#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
const int N = 2e5 + 10;
const int MOD = 1e9 + 7;
#define endl '\n'
#define PY puts("Yes")
#define PN puts("No")
bool cmp(pi a, pi b)
{
    if (a.second == b.second)
        return a.first < b.first;
    else
        return a.second > b.second;
}
pi a[N];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        cin >> a[i].first >> a[i].second;
    sort(a, a + m, cmp);
    int k = n * 1.5;
    int s = a[k - 1].second;
    cout << a[k - 1].second;
    while (k < m && a[k].second == s)
        k++;
    cout << " " << k << endl;
    for (int i = 0; i < k; i++)
        cout << a[i].first << " " << a[i].second << endl;
    return 0;
}
