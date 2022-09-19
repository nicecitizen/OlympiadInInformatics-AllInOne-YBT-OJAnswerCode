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
    int x;
    vector<int> odd, even;
    while (cin >> x)
    {
        if (x & 1)
            even.emplace_back(x);
        else
            odd.emplace_back(x);
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());
    reverse(even.begin(), even.end());
    for (int i = 0; i < even.size(); i++)
        cout << even[i] << " ";
    for (int i = 0; i < odd.size(); i++)
        cout << odd[i] << " ";
    return 0;
}
