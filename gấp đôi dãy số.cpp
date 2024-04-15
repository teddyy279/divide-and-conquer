#include<bits/stdc++.h>

using namespace std;

int mod = 1000000007;

int tinh(int n, int k){
    long long x = pow(2, n - 1);
    if(k == x) return n;
    if(k > x) return (n - 1, k - x);
    return tinh(n - 1, k);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    cout << tinh(n, k);
}
