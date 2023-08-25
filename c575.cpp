#include <bits/stdc++.h>

#define Anemoi ios::sync_with_stdio(false);cin.tie(0);

using namespace std;
typedef long long ll;
vector<ll> v;
ll n, k;
bool check(ll len){
    int j=0;
    //cout << len << " ";
    for(int i=0; i<k; i++){
        //cout << j << " ";
        if(j < n and v[j]+len < v.back()){
            j = distance(v.begin(), (upper_bound(v.begin(), v.end(), v[j]+len)));
        }
        else{
            //cout << "\n";
            return true;
        }
            
    }
    //cout << j << " " << v[j]+len << "\n";
    return false;
}

int main(){
    Anemoi
    cin >> n >> k;
    v.resize(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    ll l = 1, r=1000000000;
    while(l<r){
        ll m = l+(r-l)/2;
        //cout << m << " ";
        if(check(m))
            r = m;
        else
            l = m+1;
    }
    cout << l << "\n";
}