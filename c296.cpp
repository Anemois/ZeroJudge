#include <bits/stdc++.h>
#pragma GCC optimize("O2")
#define Anemoi ios::sync_with_stdio(false);cin.tie(0);
using namespace std;

typedef long long ll;

int main(){
    Anemoi
    int n, m, k;
    cin >> n >> m >> k;
    int now = 0;
    int siz = n-k;
    for(int i=0; i<k; i++){
        siz++;
        now = (now+m)%siz;
    }
    cout << now+1;
}