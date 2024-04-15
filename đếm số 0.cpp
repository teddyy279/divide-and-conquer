#include<bits/stdc++.h>

using namespace std;

int BinarySearch(int a[], int n){
    int l = 0, r = n - 1;
    int res = 0;
    while(l <= r){
        int mid = (l + r) / 2;
        if(a[mid] == 1){
            r = mid - 1;
            res = mid;
        }
        else{
            l = mid + 1;
        }
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin  >> x;
    int t1 = BinarySearch(a, n);
    cout << t1;
}
