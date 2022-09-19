#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5 + 10;
#define endl '\n'
int a[N], b[N];
ll ans = 0;
/*
take test case for example
after split,come to first layer of merge:
[2,3] [2,3] 1+1
[2,2,3,3]+1
需要加强理解：拆分后排序不改变逆序对数量，总和等于每段累加
*/
void mergesort(int l, int r)
{
    if (l == r)
        return;
    int mid = (l + r) / 2;
    mergesort(l, mid);
    mergesort(mid + 1, r);
    int i = l, j = mid + 1, k = l;
    while (i <= mid && j <= r)
    {
        if (a[i] <= a[j])
            b[k] = a[i++];
        else
        {
            b[k] = a[j++];
            ans += mid - i + 1;
        }
        k++;
    }
    while (i <= mid)
        b[k++] = a[i++];
    while (j <= r)
        b[k++] = a[j++];
    for (int i = l; i <= r; i++)
        a[i] = b[i];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    mergesort(1, n);
    cout << ans << endl;
    // for (int i = 1; i <= n; i++)
    // cout << a[i] << " ";
    return 0;
}
