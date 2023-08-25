#include <iostream>
#include <cstring>
#include <string>
#include <string.h>
#include <algorithm>
#include <vector>
#include <math.h>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <iterator>
#include <stack>
#include <deque>
#pragma GCC optimize("O2")
#define Anemoi ios_base::sync_with_stdio(false);cin.tie(0);cerr.tie(0);
#define MOD 1000000007

typedef unsigned long long ull;
typedef long long ll;
typedef unsigned long long ld;

using namespace std;

int main(){
    Anemoi
    int n;
    cin >> n;
    vector<pair<ll, ll>> vect(n);
    for(int i=0; i<n; i++){
        ll a, b;
        cin >> a >> b;
        vect[i] = {a, b};
    }

    sort(vect.begin(), vect.end());

    //for(auto i : vect){
    //    cout << i.first << " " << i.second << "\n";
    //}
    
    ll start=vect[0].first, end = vect[0].second;
    ll ans = 0;
    int i=1;
    
    for(int i=0; i<n; i++){
        if (vect[i].first < end and vect[i].second <= end){
        }
        else if(vect[i].first <= end and vect[i].second > end){
            end = vect[i].second;
        }
        else{
            ans += end - start;
            start = vect[i].first;
            end = vect[i].second;
        }
    }
    ans += end - start;
    cout << ans;
}