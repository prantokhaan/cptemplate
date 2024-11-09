// Solution starts from 111
#include <bits/stdc++.h>
#ifdef DEBUG
#include "debug.h"
#else 
#define dbg(x...)
#endif
using namespace std;

// Data Types
typedef int64_t lli;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef string str;
typedef vector<int> vi;
typedef vector<lli> vl;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<char> vc;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<lli, lli> pll;
typedef pair<lli, int> pli;
typedef pair<int, lli> pil;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
typedef vector<pli> vpli;
typedef vector<pil> vpil;
typedef map<int, int> mi;
typedef map<lli, lli> ml;
typedef set<int> si;
typedef set<lli> sl;
typedef multiset<int> msi;
typedef multiset<lli> msl;

// Shortcuts
#define ff first
#define ss second
#define pf push_front
#define pb push_back
#define pof pop_front
#define pob pop_back
#define pf push_front
#define eb emplace_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define ins insert
#define sz(a) a.size()
#define bt(a) a.begin(), a.end()
#define mem(a, b) memset(a, b, sizeof(a))
#define rall(a) a.rbegin(), a.rend()
#define Unique(a) (a).erase(unique(bt(a)), (a).end())
#define getSum(a) accumulate(bt(a), 0)
#define maxE(a) *max_element(bt(a))
#define minE(a) *min_element(bt(a))
#define fixed(x) fixed << setprecision(x)
#define makeUnique(a) sort(bt(a)); a.erase(unique(bt(a)) - a.begin())

// Inputs
#define cin(a) cin >> a;
#define cind(a, b) cin >> a >> b;
#define cint(a, b, c) cin >> a >> b >> c;
#define cintd(a, b, c, d) cin >> a >> b >> c >> d;
#define input(a, ini, till) for(int i = ini; i < till; i++) cin >> a[i];

// New Line
#define line cout << "\n";
#define endl "\n";

// Print
#define print(a) cout << a << endl
#define dprint(a, b) cout << a << " " << b << endl
#define aPrint(a) cout << a << " "
#define yes(a) cout << (a ? "Yes" : "YES") << endl
#define no(a) cout << (a ? "No" : "NO") << endl

// Loops
#define loop(i, a, n) for(int (i) = (a); i < (n); i++)
#define dloop(i, a, n) for(int (i) = (a); i >= (n); i--)
#define trav(a) for(auto &it: a)
#define rloop(a) for(auto it = a.rbegin(); it != a.rend(); it++)
#define vprint(a) trav(a) cout << it << " "; line;
#define test int t; cin(t); loop(i, 1, t + 1)

// Sort
#define asort(a) sort(bt(a))
#define dsort(a) sort(bt(a), greater<int>())
#define pairSortSec(f) sort(bt(a), f)

// Values
#define MOD 1000000007
#define MOD1 998244353
#define inf 1e18
#define PI acos(-1)
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define fastKajKorBhai ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)

void file(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
}

// Solution Starts Here
void take_a_breath(int test_case) {
    
}

int32_t main() {
    fastKajKorBhai;
    // file();

    int T = 1;
    cin(T);
    loop(i, 1, T + 1) {
        // cout << "Case " << i << ": ";
        take_a_breath(i);
    }

    return 0;
}
