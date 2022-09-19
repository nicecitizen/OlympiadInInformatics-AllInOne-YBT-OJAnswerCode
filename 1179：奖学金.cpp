#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
const int N = 2e5 + 10;
const int MOD = 1e9 + 7;
#define endl '\n'
#define PY puts("Yes")
#define PN puts("No")
struct Stud
{
    int no, a, b, c, total;
} stud[N];
bool cmp(struct Stud a, struct Stud b)
{
    if (a.total == b.total)
    {
        if (a.a == b.a)
        {
            return a.no > b.no;
        }
        else
            return a.a < b.a;
    }
    else
    {
        return a.total < b.total;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> stud[i].a >> stud[i].b >> stud[i].c;
        stud[i].total = stud[i].a + stud[i].b + stud[i].c;
        stud[i].no = i + 1;
    }
    sort(stud, stud + n, cmp);
    for (int i = n - 1; i >= n - 5; i--)
        cout << stud[i].no << " " << stud[i].total << endl;
    return 0;
}
