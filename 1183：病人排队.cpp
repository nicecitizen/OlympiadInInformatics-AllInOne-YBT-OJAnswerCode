#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
const int N = 2e5 + 10;
const int MOD = 1e9 + 7;
#define endl '\n'
#define PY puts("Yes")
#define PN puts("No")
struct Patient
{
    int no, age;
    string id;
};
bool cmp(struct Patient a, struct Patient b)
{
    if (a.age != b.age)
        return a.age > b.age;
    else
        return a.no < b.no;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<struct Patient> el, nm;
    for (int i = 1; i <= n; i++)
    {
        string id;
        int age;
        cin >> id >> age;
        struct Patient ts;
        ts.no = i, ts.age = age, ts.id = id;
        if (age >= 60)
            el.emplace_back(ts);
        else
            nm.emplace_back(ts);
    }
    sort(el.begin(), el.end(), cmp);
    for (int i = 0; i < el.size(); i++)
        cout << el[i].id << endl;
    for (int i = 0; i < nm.size(); i++)
        cout << nm[i].id << endl;
    return 0;
}
