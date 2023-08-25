#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <string>

#pragma GCC optimize("O2")
#define Anemoi ios_base::sync_with_stdio(false);cin.tie(0);cerr.tie(0);

using namespace std;

int main(){
    Anemoi
    int n;
    cin >> n;
    vector<int> vect(n);
    for(int i=0; i<n; i++)
        cin >> vect[i];
    sort(vect.begin(), vect.end());
    int a=-1, b=-1;
    for(int i=0; i<n; i++){
        cout << vect[i] << " ";
        if(vect[i] < 60){
            a = a != -1 ? max(a, vect[i]) : vect[i];
        }
        else{
            b = b != -1 ? min(b, vect[i]) : vect[i];
        }
    }
    cout << "\n";
    if(a!=-1)
        cout << a;
    else
        cout << "best case";
    cout << "\n";
    if(b!=-1)
        cout << b;
    else
        cout << "worst case";
}