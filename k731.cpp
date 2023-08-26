#include <bits/stdc++.h>
#define Anemoi ios_base::sync_with_stdio(false);cin.tie(0);

using namespace std;

int get_dir(int x1, int y1, int x2, int y2){
    if(x2 > x1)
        return 0;
    if(y2 < y1)
        return 1;
    if(x2 < x1)
        return 2;
    return 3;
}

int main(){
    Anemoi
    int dir=0;
    int n;
    cin >> n;
    int l=0, r=0, u=0;
    int prev[2], now[2];
    cin >> prev[0] >> prev[1];
    const int calc[4][3] = {{3,2,1}, {0,3,2}, {1,0,3}, {2,1,0}};
    for(int i=0; i<n-1; i++){
        cin >> now[0] >> now[1];
        int newDir = get_dir(prev[0], prev[1], now[0], now[1]);
        if(calc[dir][0] == newDir){
            l++;
        } else if(calc[dir][1] == newDir){
            u++;
        } else if(calc[dir][2] == newDir){
            r++;
        }
        dir = newDir;
        prev[0] = now[0];
        prev[1] = now[1];
    }
    cout << l << " " << r << " " << u << "\n";
}