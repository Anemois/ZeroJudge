#include <bits/stdc++.h>
#define Anemoi ios_base::sync_with_stdio(false);cin.tie(0);

using namespace std;

int main(){
    Anemoi
    int n, m, k;
    cin >> n >> m >> k;
    bool have[m] = {0};
    vector<int> start;
    int box[n];
    for(int i=0; i<n; i++) box[i] = k;
    vector<vector<int>> KTB(m);
    vector<vector<int>> BTK(n);
    int nn, ok;
    cin >> nn;
    for(int i=0; i<nn; i++){
        cin >> ok;
        start.push_back(ok);
        have[ok] = true;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<k; j++){
            cin >> ok;
            KTB[ok].push_back(i);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<k; j++){
            cin >> ok;
            BTK[i].push_back(ok);
        }
    }
    int prev=0, cnt=0;

    vector<int> next;
    while(1){
        next.clear();
        for(int i=0; i<start.size(); i++){
            for(auto& itr : KTB[start[i]]){
                box[itr]--;
                if(box[itr] == 0){
                    cnt++;
                    for(auto& itr2 : BTK[itr]){
                        if(!have[itr2]){
                            next.push_back(itr2);
                            have[itr2] = true;
                        }
                    }
                }
            }
        }
        if(cnt == prev) break;
        prev = cnt;
        start = next;
    }
    cout << cnt;
}