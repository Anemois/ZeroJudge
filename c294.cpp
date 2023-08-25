#include <bits/stdc++.h>
#pragma GCC optimize("O2")
#define Anemoi ios::sync_with_stdio(false);cin.tie(0);

using namespace std;

typedef long long ll;

int main(){
    Anemoi
    vector<ll> len(3);
    cin >> len[0] >> len[1] >> len[2];
    sort(len.begin(), len.end());
    cout << len[0] << " " << len[1] << " " << len[2] << "\n";
    if(len[0] + len[1] <= len[2])
        cout << "No";
    else{
        len[0] *= len[0];
        len[1] *= len[1];
        len[2] *= len[2];
        if(len[0] + len[1] < len[2])
            cout << "Obtuse";
        else if(len[0] + len[1] == len[2])
            cout << "Right";
        else
            cout << "Acute";
    }
}