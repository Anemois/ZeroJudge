#include <bits/stdc++.h>
#define Anemoi ios_base::sync_with_stdio(false);cin.tie(0);

using namespace std;

typedef long long ll;

string str;

ll calc(char& a, char& b){
    return (a-'0')*10 + (b-'0');
}

vector<ll> go(ll ii){//{sum, i, first, last}
    ll first = -1;
    ll last = -1;
    ll t, i;
    ll ans=0;
    for(i=ii; str[i]!='E'; i++){
        if(str[i] == 'T'){
            if(first == -1){
                first = calc(str[i+1], str[i+2]);
                last = first;
            }
            t = calc(str[i+1], str[i+2]);
            ans += abs(last - t);
            last = t;
            //cout << last << " ";
        }
        else if(str[i] == 'L'){
            vector<ll> ok = go(i+2);//str[i+1]-'0'
            //for(auto& sh : ok)
            //    cout << sh << " ";
            //cout << "\n";
            if(first == -1){
                ans += (ok[0])+(str[i+1]-'1')*(ok[0]+abs(ok[3]-ok[2]));
                first = ok[2];
            }
            else
                ans += (ok[0]+abs(last-ok[2]))+(str[i+1]-'1')*(ok[0]+abs(ok[3]-ok[2]));
            //cout << ans << " ";
            last = ok[3];
            i = ok[1];
        }
        //cout << "ans : " << ans << "\n";
    }
    return {ans, i, first, last};
}

int main(){
    Anemoi
    cin >> str;
    //if(str.length()>50000) cout << str;
    ll t;
    ll last=10, ans=0;
    for(ll i=0; i<str.length(); i++){
        if(str[i] == 'T'){
            t = calc(str[i+1], str[i+2]);
            ans += abs(last - t);
            last = t;
            //cout << last << " ";
        }
        else if(str[i] == 'L'){
            vector<ll> ok = go(i+2);//str[i+1]-'0'
            //for(auto& sh : ok)
            //    cout << sh << " ";
            //cout << "\n";
            ans += (ok[0]+abs(last-ok[2]))+(str[i+1]-'1')*(ok[0]+abs(ok[3]-ok[2]));
            //cout << ans << " ";
            last = ok[3];
            i = ok[1];
        }
        //cout << "ans : " << ans << "\n";
    }
    //cout << "\n";
    cout << ans << "\n";
}