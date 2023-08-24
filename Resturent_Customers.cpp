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
    
    int mx = 0;


    int n;
    cin >> n;
    vector<pair<int,int>> v;

    while (n--)
    {
        int x,y;
        cin >> x>>y;

        v.push_back({x,1});
        v.push_back({y,-1});
    }

    sort(v.begin(),v.end());

    int cnt=0;

    for (int i = 0; i < v.size(); i++)
    {
        // cout << v[i].first << " " << v[i].second << endl;
        if(v[i].second==1)
        {
            cnt++;
            mx = max(cnt,mx);
        }
        else cnt--;
    }

    cout << mx << endl;
    


     
    return 0;
}
