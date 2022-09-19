#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5 + 10;
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int ans = 100, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        if (ans == v)
            cnt++;
        else
        {
            if (cnt > 0)
                cnt--;
            else
                ans = v;
        }
    }
    if (cnt > 0)
        cout << ans;
    else
        cout << "no";
    return 0;
}
