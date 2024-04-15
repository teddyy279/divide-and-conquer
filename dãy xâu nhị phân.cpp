#include<bits/stdc++.h>

using namespace std;

long long F[93];

void ktao(){
    F[0] = 0, F[1] = 1;
    for(int i = 2; i < 93; i++){
        F[i] = F[i - 1] + F[i - 2];
    }
}

char S(int n, int k){
    if(n == 1) return '0';
    if(n == 2) return '1';
    if(k <= F[n - 2]){
        return S(n - 2, k);
    } 
    else{
        return S(n - 1, k - F[n - 2]);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    ktao();
    cout << S(n, k);
}