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
    int cnt[26];
    memset(cnt, 0, sizeof(cnt));
    string s;
    cin >> s;
    char mc;
    int mv = 0;
    for (int i = 0; i < s.length(); i++)
        cnt[s[i] - 'a']++;
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] > mv)
        {
            mv = cnt[i];
            mc = i + 'a';
        }
    }
    cout << mc << " " << mv;
    return 0;
}
