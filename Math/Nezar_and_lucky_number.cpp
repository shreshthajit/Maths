we can see that if the number is greater than or equal to d*10 than there alwars exists an answer
 if n=43 and d=3
 than 3*10<43 so 
     31
     32
     33 
     34
     35
     36
     37 
     38
     39
     31+9
     32+9
     33+9
     .....
     31+9+9
     32+9+9
     33+9+9
     .......

     
     so we can always express the answer as the sum of different lucky number.

      #https://codeforces.com/contest/1478/problem/B

#include<bits/stdc++.h>
using namespace std;
#define mod (int) 998244353
#define MOD (int) 1e9+7
#define X 1001100011100001111ll
#define all(a) a.begin(),a.end()
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i,a,b) for (int i = a; i < b; i++)
#define bloop(i,a,b) for (int i = a ; i>=b;i--)
#define tc(t) int t; cin >> t; while (t--)
#define int long long
#define ll long long
#define pb emplace_back
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define in(x) scanf("%d", &x)
#define rr return 0
#define prec(n) fixed<<setprecision(n)
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int> >
#define inf (int)(1e18)
#define ini(a, i) memset(a, i, sizeof(a))
#define vi vector<int>
#define fi first
#define se second
#define endl "\n"
#define ii pair<int, int>
#define vii vector<ii>
long long  binpow(long long  x, long  n)
{
    x %= MOD;
    long long  res = 1 ;
    while( n > 0)
    {
        if( n & 1 ) res = ( res * x ) % MOD ;
        ///n >>= 1 ;
        n=n/2;
        x = ( x * x ) % MOD;
    }
    return res ;
}

signed main()
{
    tc(t)
    {
        ll q,d;
        cin>>q>>d;
        ll n;
        for0(i,q)
        {
            cin>>n;

            bool ck=false;
            if(n>=d*10)
            {
                cout<<"YES"<<endl;
                continue;
            }
            else
            {
                while(n>=0 && n%10!=d)
                {
                    n=n-d;
                }
                if(n%10==d)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
        }
    }
}

