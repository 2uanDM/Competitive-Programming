#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second

int n, a[100001];
void prta(int arr[],int n)
{
    for(int i = 1; i<=n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

void input()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
}

void sol1()
{
    // Đưa số nhỏ ra phía trước
    for(int i=1; i<=n; ++i)
        for(int j = n; j>i; --j)
            if(a[j] < a[j-1]) swap(a[j],a[j-1]);
    prta(a,n);

}
void sol2()
{
    // Đưa số lớn ra phía sau
    for(int i = n; i>=1; i--)
        for (int j = 1; j < i; ++j)
            if(a[j] > a[j+1]) swap(a[j], a[j+1]);
    prta(a,n);
}
int main()
{
    freopen("test.inp","r",stdin);
    freopen("test.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    input();
    //sol1();
    sol2();

    return 0;
}
