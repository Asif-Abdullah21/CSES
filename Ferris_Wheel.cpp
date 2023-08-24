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
    ll n,w;
    cin >> n>> w;

    ll a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a,a+n);

    ll cnt=0;

    for (int i = 0,j=n-1; i <= j;)
    {
        if(a[i]+a[j]<=w){
            cnt++;
            i++;
            j--;
        }
        else if(i==j){
             cnt++;
             i++;
             j--;
        }
        else
        {
            cnt++;
            j--;
        }
    }
    cout << cnt << endl;
    
    
     
    return 0;
}
