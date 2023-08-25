#include <bits/stdc++.h>

#define Anemoi ios::sync_with_stdio(false);cin.tie(0);
#pragma GCC optimize("O2")
using namespace std;

void go(vector<int>& v, int& ptr){
    if(v[ptr] != -1){
        int ok = v[ptr];
        v[ptr] = -1;
        go(v, ok);
    }
}

int main(){
    Anemoi
    int cnt=0, n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    
    for(int i=0; i<n; i++){
        if(v[i] != -1){
            cnt++;
            go(v, i);
        }
    }
    cout << cnt;
}