#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
const int N = 2e5 + 10;
const int MOD = 1e9 + 7;
#define endl '\n'
#define PY puts("Yes")
#define PN puts("No")
bool cmp(pair<int, string> a, pair<int, string> b)
{
    if (a.first != b.first)
        return a.first < b.first;
    else
        return a.second > b.second;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    pair<int, string> pi[n];
    for (int i = 0; i < n; i++)
        cin >> pi[i].second >> pi[i].first;
    sort(pi, pi + n, cmp);
    for (int i = n - 1; i >= 0; i--)
        cout << pi[i].second << " " << pi[i].first << endl;
    return 0;
}
