#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,a,b) for(int i = 1; i<=a; ++i)
#define fi first
#define se second

int n,a[10001],data[10001];
// a là mảng tạm để sort
// data là mảng ban đầu
void prta(int arr[],int n)
{
    for(int i = 1; i<=n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
void input()
{
    cin >> n;
    for(int i =1; i<=n; ++i)
        cin >> data[i];
}
void solve(int left, int right)
{
    if (left == right)
        return;

    int mid = (left + right) / 2;
    solve(left, mid);
    solve(mid+1, right);

    int i = left, j = mid+1;
    int cur = 0;

    while (i <= mid || j <= right)
    {
        if (i > mid) a[cur++] = data[j++];
        else
        {
            if (j > right) a[cur++] = data[i++];
            else
            {
                if (data[i]>data[j]) a[cur++] = data[j++];
                else a[cur++] = data[i++];
            }
        }
    }

    for(int i = 0; i < cur; i++)
        data[left + i] = a[i];
}
int main()
{
    freopen("test.inp","r",stdin);
    freopen("test.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    input();
    solve(1,n);
    prta(data,n);
    return 0;
}
