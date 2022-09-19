#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
const int N = 2e5 + 10;
const int MOD = 1e9 + 7;
#define endl '\n'
#define PY puts("Yes")
#define PN puts("No")
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> ans;
    while (n--)
    {
        int v;
        cin >> v;
        if (v & 1)
            ans.emplace_back(v);
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size() - 1; i++)
        cout << ans[i] << ",";
    cout << *ans.rbegin();
    return 0;
}
