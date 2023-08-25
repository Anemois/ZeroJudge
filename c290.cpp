#include <bits/stdc++.h>

#define Anemoi ios::sync_with_stdio(false);cin.tie(0);

using namespace std;

int main(){
    Anemoi
    int a=0, b=0;
    string s;
    cin >> s;
    bool flip=true;
    for(auto& i : s){
        if(flip)
            a += i-'0';
        else
            b+= i-'0';
        flip = !flip;
    }    
    cout << abs(a-b);
}