#include<bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 

using namespace std;
using namespace __gnu_pbds;

#define __404__()              \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

typedef long long int ll;
typedef unsigned long int ull;

typedef double ld;
typedef long double lld;

#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>

#define mi map<int, int>
#define mii map<ll,ll>
#define umi unordered_map<int, int>

#define pr pair<int, int>
#define pri pair<ll,ll>

#define rep(i, s, e) for (int i = (s); i <= (e); i++)
#define per(i, s, e) for (int i = (s); i >= (e); i--)

#define pb push_back
#define ppb pop_back

#define ff first
#define ss second

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)((x).size()))

#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define neg cout<<"-1"<<endl

#define ln '\n'
#define lnn cout<<ln;
#define lnnn cout<<ln<<ln;

const ld pi = 3.141592653589793238;
const ll MOD = 1e9 + 7;
const ll N = 2e5 + 9;
const ll INF = 1e18;
const double EPS = 1e-9;

template <typename T>
using ordered_set = tree<
    T,
    null_type,
    less<T>,
    rb_tree_tag,
    tree_order_statistics_node_update
>;

/*==================== DEBUG TOOLKIT ====================*/
#ifndef ONLINE_JUDGE

// Basic variable
#define debug(x) cerr << #x << " = " << x << endl;

// Two variables
#define debug2(a,b) cerr << #a << "=" << a << ", " \
                         << #b << "=" << b << endl;

// Three variables
#define debug3(a,b,c) cerr << #a << "=" << a << ", " \
                           << #b << "=" << b << ", " \
                           << #c << "=" << c << endl;

// Vector
template<typename T>
void debug_vector(const vector<T>& v) {
    cerr << "[ ";
    for (auto& x : v) cerr << x << " ";
    cerr << "]" << endl;
}

// 2D Vector / Matrix
template<typename T>
void debug_matrix(const vector<vector<T>>& v) {
    for (auto& row : v) {
        for (auto& x : row)
            cerr << x << " ";
        cerr << endl;
    }
}

// Pair
template<typename T, typename V>
void debug_pair(const pair<T, V>& p) {
    cerr << "{ " << p.first << ", " << p.second << " }" << endl;
}

// Set / Multiset
template<typename T>
void debug_set(const set<T>& s) {
    cerr << "{ ";
    for (auto& x : s) cerr << x << " ";
    cerr << "}" << endl;
}

// Map / Unordered Map
template<typename T, typename V>
void debug_map(const map<T, V>& m) {
    cerr << "{ ";
    for (auto& p : m)
        cerr << "(" << p.first << ":" << p.second << ") ";
    cerr << "}" << endl;
}

// DSU parent array
template<typename T>
void debug_array(T arr[], int n) {
    cerr << "[ ";
    for (int i = 0; i < n; i++)
        cerr << arr[i] << " ";
    cerr << "]" << endl;
}

// Execution time
#define TIME_START auto start = chrono::high_resolution_clock::now();
#define TIME_END auto end = chrono::high_resolution_clock::now(); \
    cerr << "Execution Time: " \
         << chrono::duration<double>(end - start).count() \
         << "s\n";

#else

#define debug(x)
#define debug2(a,b)
#define debug3(a,b,c)
#define TIME_START
#define TIME_END

#endif


//         ██████████████               ██████████████           //
//    ██████              ██ ███████ ██              ███████     //
//     ████                ███      █                 ██         //
//       ██  █              ██     ██                █ █         //
//       ██    █      █████████    ████████       ██   █         //
//        █      █          ██      █            █    ██         //
//        ██      ██       █         █        ██     ██          //
//          █    █████   ██           ██  ███████  ██            //
//            ███     ███               ██       ███             //

// ███╗░░░███╗░█████╗░██╗░░██╗░█████╗░██████╗░██╗░░░██╗██████╗░  // 
// ████╗░████║██╔══██╗██║░░██║██╔══██╗██╔══██╗██║░░░██║██╔══██╗  // 
// ██╔████╔██║███████║███████║███████║██████╦╝██║░░░██║██████╦╝  // 
// ██║╚██╔╝██║██╔══██║██╔══██║██╔══██║██╔══██╗██║░░░██║██╔══██╗  // 
// ██║░╚═╝░██║██║░░██║██║░░██║██║░░██║██████╦╝╚██████╔╝██████╦╝  // 
// ╚═╝░░░░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝╚═════╝░░╚═════╝░╚═════╝░  // 


void InFiNiTe() {
    int n; cin >> n;

    cout << 1 << " " << n - 1 << ln;
}

int main() {

    __404__();

    int t = 1;
    cin >> t;

    while (t--) {
        InFiNiTe();
    }

    return 0;
}