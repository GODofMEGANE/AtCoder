﻿#include <bits/stdc++.h>
#if __has_include(<local.h>)
#include <local.h>
#include <unistd.h>
#endif
using namespace std;

typedef long long int LL;
typedef long long int LLint;

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
#define UP(a,b) ((a+(b-1))/b)
#define IPOW(x,y) LL(pow(x,y))

//Debug
#ifdef LOCAL_H
#define TEST cout << "OK\n"
#define LOG(a) cout << a << "\n"
#else
#define TEST
#define LOG(a)
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
const long long MOD = int(1000000007);

//Settings
#ifdef LOCAL_H
const bool DO_BENCHMARK = true;
#endif
const int DOUBLE_ACCURACY = 15;

#ifndef LOCAL_H
    const bool DO_BENCHMARK = false;
#endif

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(DOUBLE_ACCURACY);
    void solve();
    if(DO_BENCHMARK){
        clock_t clock_start = clock();
        solve();
        clock_t clock_end = clock();
        const double time = static_cast<double>(clock_end-clock_start)/CLOCKS_PER_SEC*1000.0;
        cout << "\n" << time << "[ms]\n";
    }
    else solve();
}

/************************************************************************************************************************************************/

void solve(){
    for(int i = 0;i < 10000000;i++){
        int count = min(i%100,100-i%100);
        for(int j = 0;j < count;j++){
            cout << "-";
        }
        cout << "FUCK!" << endl;
        usleep(1);
    }
}
