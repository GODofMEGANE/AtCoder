#include <bits/stdc++.h>
#include <unistd.h>
#include <atcoder/all>

#if __has_include(<local.h>)
#include <local.h>
#endif

using namespace std;
using namespace atcoder;

typedef long long int LL;
typedef long long int LLint;

#ifdef LOCAL_H
const bool LOCAL = true;
#else
const bool LOCAL = false;
#endif

//Faster Program
#define endl "\n"

//Faster Coding
#define ED return
#define GET(a) int a;cin >> a
#define DGET(a) double a;cin >> a
#define SGET(a) string a;cin >> a
#define CGET(a) char a;cin >> a
#define PRINT(a) cout << a << "\n"
#define ANS(a,b) int a;cin >> a;cout << b << "\n"
#define REP(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define SORT(vec) sort(vec.begin(),vec.end())
#define REV(vec) reverse(vec.begin(),vec.end())
#define ALL(x) (x).begin(),(x).end()

//As Function
#define UP(a,b) ((a+(b-1))/(b))
#define IPOW(x,y) (LL(pow(x,y)))

//Debug
#ifdef LOCAL_H
#define TEST cout << "OK\n"
#define DEBUG(a) a
#else
#define TEST
#define DEBUG(a)
#endif

#ifdef LOCAL_H
[[maybe_unused]]
#endif
const double PI = M_PI;
#ifdef LOCAL_H
[[maybe_unused]]
#endif
const int INF = int(999999999);
#ifdef LOCAL_H
[[maybe_unused]]
#endif
const LL LL_INF = LL(999999999999999999);
#ifdef LOCAL_H
[[maybe_unused]]
#endif
const long long MOD = int(1000000007);
#ifdef LOCAL_H
[[maybe_unused]]
#endif
const long long MOD_2 = int(998244353);

//Settings
const bool DO_BENCHMARK = true;
const int DOUBLE_ACCURACY = 5;
const int RUN_SOLVE = 1;


int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(DOUBLE_ACCURACY);
    for(int do_solve_time = 0;do_solve_time < RUN_SOLVE;do_solve_time++){
        void solve();
        if(DO_BENCHMARK && LOCAL){
            clock_t clock_start = clock();
            solve();
            clock_t clock_end = clock();
            const double time = static_cast<double>(clock_end-clock_start)/CLOCKS_PER_SEC*1000.0;
            cout << "\n------------------------------------\n" << time << "[ms]\n";
        }
        else solve();
    }
}

/*------------------------------↓ここからコード↓----------------------------------*/
void solve(){
    int N;
    cin >> N;
    if(N%2==0){
        cout << "White" << endl;
    }
    else{
        cout << "Black" << endl;
    }
    return;
}
