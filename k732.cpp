#include <bits/stdc++.h>
#define Anemoi ios_base::sync_with_stdio(false);cin.tie(0);

using namespace std;

int main(){
    Anemoi
    int n, m;
    cin >> n >> m;
    int matrix[n][m+1];
    int sumMat[n][m+1];
    for(int i=0; i<n; i++){
        sumMat[i][0] = 0;
        for(int j=1; j<=m; j++){
            cin >> matrix[i][j];
            sumMat[i][j] = matrix[i][j] + sumMat[i][j-1];
            //cout << sumMat[i][j] << " ";
        }
        //cout << "\n";
    }
    vector<pair<int, int>> ans;

    for(int i=0; i<n; i++){
        for(int j=1; j<=m; j++){
            int dist, sum=0, y;
            int x = matrix[i][j];
            for(int k=0; k<=x*2; k++){
                dist = x - abs(x-k);
                y = i + k-x;
                if(y < 0 or y >= n) continue;
                //cout << i << " " << j << " " << dist << " : " << min(m, j+dist) << " " << max(0, j-dist-1) << "\n";
                sum += (sumMat[y][min(m, j+dist)])-(sumMat[y][max(0, j-dist-1)]);
            }
            //cout << i << " " << j << " " << sum << "\n";
            if(sum%10 == x)
                ans.push_back({i, j-1});
        }
    }
    sort(ans.begin(), ans.end(), [](pair<int, int>const& a, pair<int, int>const& b){
        return a.first == b.first ? a.second < b.second : a.first < b.first;
    });
    cout << ans.size() << "\n";
    for(auto& i : ans){
        cout << i.first << " " << i.second << "\n";
    }    
    
}