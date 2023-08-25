#include <bits/stdc++.h>
#include <string>;
#define Anemoi ios::sync_with_stdio(false);cin.tie(0);

using namespace std;

string ans;
vector<vector<int>> matrix;
void go(int dir, int steps, int i, int j, bool sec, int siz){
    //cout << i << " " << j << " " << steps << "\n";
    if(dir == 1){
        int l = i-steps;
        for(i=i;i>l; i--){
            //cout << i << " ";
            ans += '0' + matrix[i][j];
        }
            
    }
    else if(dir == 2){
        int l = j+steps;
        for(j=j;j<l; j++)
            ans += '0' + matrix[i][j];
    }
    else if(dir == 3){
        int l = i+steps;
        for(i=i;i<l; i++)
            ans += '0' + matrix[i][j];
    }
    else{
        int l = j-steps;
        for(j=j;j>l; j--)
            ans += '0' + matrix[i][j];
    }
    if(ans.length() >= siz){
        //ans += '0' + matrix[i][j];
        return;
    } 

    go((dir+1)%4, sec==true ? steps+1 : steps, i, j, !sec, siz);
}

int main(){
    Anemoi
    int n, dir;
    cin >> n >> dir;
    matrix.resize(n, vector<int>(n));
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++){
            cin >> matrix[i][j];
            //cout << matrix[i][j] << " ";
        }
            
    //ans += '0' + matrix[n/2][n/2];
    go(dir, 1, n/2, n/2, false, n*n);
    cout << ans << "\n";
}