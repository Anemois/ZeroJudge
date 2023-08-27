#include <bits/stdc++.h>

#define Anemoi ios_base::sync_with_stdio(false);cin.tie(0);

using namespace std;
int main(){
    Anemoi
    int k;
    cin >> k;
    string str;
    cin >> str;
    vector<int> v;
    int cnt=1;
    for(int i=1; i<str.length(); i++){
        if(islower(str[i]) == islower(str[i-1]))
            cnt++;
        else{
            v.push_back(cnt);
            cnt=1;
        }
    }
    v.push_back(cnt);

    vector<int> dp(v.size());
    
    if(v[0] >= k) dp[0] = 1;
    int bigs = dp[0];
    //cout << v[0] << " ";
    for(int i=1; i<v.size(); i++){
        //cout << v[i] << " ";
        if(v[i] > k){
            bigs = max(bigs, dp[i-1]+1);
            dp[i] = 1;
        }
        else if(v[i]==k){
            dp[i] = dp[i-1]+1;
        }
        else{
            dp[i] = 0;
        }
        bigs = max(bigs, dp[i]);
    }
    cout << bigs*k;
}