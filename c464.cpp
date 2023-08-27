#include <bits/stdc++.h>
#define Anemoi ios_base::sync_with_stdio(false);cin.tie(0);
#define int long long

using namespace std;

struct box{
    int w, f;
};

signed main(){
    Anemoi
    int n;
    cin >> n;
    vector<box> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i].w;
    for(int i=0; i<n; i++)
        cin >> v[i].f;    

    sort(v.begin(), v.end(), [](box const& a, box const& b){
        return a.w*b.f<b.w*a.f;
    });
    
    
    //for(int i=0; i<=n; i++)
    //    cout << x[i] << " ";
    //cout << "\n";
    
    int before = 0, sum=0;
    for(int i=0; i<n; i++){
        //cout << v[i].w << " " << v[i].f << "\n";
        sum += (before)*v[i].f;
        before += v[i].w;
    }
    cout << sum;
}