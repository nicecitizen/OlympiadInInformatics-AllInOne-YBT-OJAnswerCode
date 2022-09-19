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
    vector<double> male, female;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        double x;
        string s;
        cin >> s >> x;
        if (s[0] == 'f')
            female.emplace_back(x);
        else
            male.emplace_back(x);
    }
    sort(male.begin(), male.end());
    sort(female.begin(), female.end());
    for (int i = 0; i < male.size(); i++)
        cout << fixed << setprecision(2) << male[i] << " ";
    for (int i = female.size() - 1; i >= 0; i--)
        cout << fixed << setprecision(2) << female[i] << " ";
    return 0;
}
