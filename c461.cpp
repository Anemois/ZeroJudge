#include<bits/stdc++.h>

#define Anemoi ios_base::sync_with_stdio(false);cin.tie(0);

using namespace std;

int main(){
    Anemoi
    int a, b, c;
    cin >> a >> b >> c;
    bool ok=true;
    //cout << a << " " << b << " " << c << "\n";
    if((a && b) == c){
        cout << "AND\n";
        ok=false;
    }
        
    if((a || b) == c){
        cout << "OR\n";
        ok=false;
    }
    if(((a||b)&&!(a&&b)) == c){
        cout << "XOR\n";
        ok=false;
    }
    if(ok)
        cout << "IMPOSSIBLE\n";
}