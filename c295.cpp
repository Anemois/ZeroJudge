#include <bits/stdc++.h>
#pragma GCC optimize("O2")
#define Anemoi ios::sync_with_stdio(false);cin.tie(0);

using namespace std;

typedef long long ll;

int get_big(vector<int>& v){
    int big = 0;
    for(auto& i : v)
        big = max(big, i);
    return big;
}

int main(){
    Anemoi
    int n, m, sum=0;
    cin >> n >> m;
    vector<int> bigs(n);
    vector<int> nums(m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> nums[j];
        }
        bigs[i] = get_big(nums);
        sum += bigs[i];
    }
    cout << sum << "\n";
    vector<int> ans;
    for(int i=0; i<n; i++){
        if(sum%bigs[i] == 0)
            ans.push_back(bigs[i]);
    }
    if(ans.empty())
        cout << -1;
    else{
        for(int i=0; i<ans.size(); i++){
            cout << ans[i];
            if(i != ans.size()-1) cout << " ";
        }
    }
}