#include <bits/stdc++.h>
#define Anemoi ios_base::sync_with_stdio(false);cin.tie(0);
#define int long long
using namespace std;

int sum=0;
vector<vector<int>> tree;

int go(int ptr){
    int bigs = 0;
    for(auto i : tree[ptr]){
        bigs = max(bigs, go(i)+1);
    }
    sum += bigs;
    //cout << bigs << " ";
    return bigs;
}

signed main(){
    Anemoi
    int n;
    cin >> n;

    tree.resize(n+1);
    vector<bool> rooters(n+1, 0);
    for(int i=1; i<=n; i++){
        int m;
        cin >> m;
        for(int j=0; j<m; j++){
            int t;
            cin >> t;
            rooters[t] = true;
            tree[i].push_back(t);
        }
    }
    int root;
    for(int i=1; i<=n; i++){
        if(!rooters[i]){
            root = i;
            break;
        }
    }
    go(root);
    cout << root << "\n" << sum;
}