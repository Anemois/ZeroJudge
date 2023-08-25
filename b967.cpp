#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <string>
#include <unordered_set>
#include <queue>

#define Anemoi ios::sync_with_stdio(false);cin.tie(0);

using namespace std;

vector<vector<int>> vect(100000);
vector<bool> found(100000);
int main(){
    Anemoi
    int n;
    while(cin >> n){
        //vector<vector<int>> vect(n);
        for(int i=0; i<n; i++)
            vect[i] = {};
        int a, b;
        for(int i=0; i<n-1; i++){
            
            cin >> a >> b;
            vect[a].push_back(b);
            vect[b].push_back(a);
        }
        int far = 0;
        int cnt=0;
        queue<int> pend;
        for(int ii=0; ii<2; ii++){
            for(int i=0; i<n; i++)
                found[i] = false;
            pend.push(far);
            found[far] = true;
            cnt = 0;
            while(!pend.empty()){
                int times = pend.size();
                cnt++;
                for(int i=0; i<times; i++){
                    far = pend.front();
                    pend.pop();
                    for(auto& i : vect[far]){
                        if(!found[i]){
                            pend.push(i);
                            found[i] = true;
                        }
                    }
                }
            }
        }
        cout << cnt-1 << "\n";
    }
}