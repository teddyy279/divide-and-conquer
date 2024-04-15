#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;
    int a[n], b[m];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    sort(a, a + n);
    sort(b, b + n);
    int i = 0, j = 0;
    int c[n + m];
    int idx = 0;
    while(i < n && j < m){
        if(a[i] <= b[j]){
            c[idx] = a[i];
            idx++;
            i++;
        }
        else{
            c[idx] = b[j];
            idx++;
            j++;
        }
    }
    while(i < n){
        c[idx] = a[i];
        i++;
        idx++;
    }
    while(j < m){
        c[idx] = b[j];
        j++;
        idx++;
    }
    cout << c[14];
}
