#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,a,b) for(int i = 1; i<=a; ++i)
#define fi first
#define se second

int n, a[10001];
void prta(int arr[],int n)
{
    for(int i = 1; i<=n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
void input()
{
    cin >> n;
    for(int i = 1; i<=n; ++i)
        cin >> a[i];
}
void solve()
{
    for(int i =1; i<=n; ++i)
    {
        int j = i;
        while(j>0 && a[j-1] > a[i]) j--;

        int tmp = a[i];
        for(int k = i; k > j; k--)
            a[k] = a[k-1];
        a[j] = tmp;
    }
    prta(a,n);
}
int main()
{
    freopen("test.inp","r",stdin);
    freopen("test.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    input();
    solve();

    return 0;
}
