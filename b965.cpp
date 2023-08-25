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

vector<vector<int>> turn(vector<vector<int>>& v){
    vector<vector<int>> im(v[0].size(), vector<int>(v.size()));
    for(int j=v[0].size()-1, ii=0; j>=0; j--, ii++){
        for(int i=0, jj=0; i<v.size(); i++, jj++){
            im[ii][jj] = v[i][j];
        }
    }
    return im;
}

vector<vector<int>> flip(vector<vector<int>>& v){
    vector<vector<int>> tired;
    tired = v;
    for(int i=0; i<tired.size()/2; i++){
        swap(tired[i], tired[tired.size()-i-1]);
    }
    return tired;
}

int main(){
    Anemoi
    int n, m, f;
    while(cin >> n >> m >> f){
        vector<vector<int>> vect(n, vector<int>(m));

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> vect[i][j];
            }
        }
        vector<int> actions(f);
        for(int i=0; i<f; i++){
            cin >> actions[i];
        }
        reverse(actions.begin(), actions.end());
        for(int i=0; i<f; i++){
            if(actions[i] == 0)
                vect = turn(vect);
            else
                vect = flip(vect);
        }
        cout << vect.size() << " " << vect[0].size() << "\n";
        for(int i=0; i<vect.size(); i++){
            for(int j=0; j<vect[0].size(); j++){
                cout << vect[i][j];
                if(j!=vect[0].size()-1)
                    cout << " ";
            }
            cout << "\n";
        }
    }
}