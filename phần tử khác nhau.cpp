#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    int b[n - 1];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    for(int i = 0; i < n - 1; i++){
        if(a[i] != b[i]){
            cout << i + 1;
            return 0;
        }
    }
}
