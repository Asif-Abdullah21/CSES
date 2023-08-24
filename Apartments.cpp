#include <bits/stdc++.h>
#define endl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ll long long
#define ull unsigned long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define pii pair<int, int>
#define pll pair<long long, long long>
#define mm(a, x) memset(a, x, sizeof(a))
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int main()
{
    FIO;
    ll n,m,k;
    cin >> n >> m >> k;

    ll a[n];
    ll b[m];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
     
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    sort(a,a+n);
    sort(b,b+m);

    ll i=0,j=0,cnt=0;

    while (i<n && j<m)
    {
       // cout << a[i] <<" " <<b[j] << endl;
        if(b[j]>=(a[i]-k) && b[j]<=(a[i]+k))
        {
            i++;
            j++;
            cnt++;
        }
        else if(b[j]<a[i]-k) j++;
        
        else if(b[j]>a[i]+k) i++;

    }

    cout << cnt << endl;
    
    
    
     
    return 0;
}