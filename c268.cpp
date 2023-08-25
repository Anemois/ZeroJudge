#include <iostream>
#include <algorithm>
using namespace std;

int edge[50];

int main()
    {
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int T,n;
    cin>>T;
    bool tri_been;
    while(T-- and cin>>n){
        cin.ignore();
        tri_been=false;
        if(n<=45)
        {
            for(int i=0;i<n;i++)
                cin>>edge[i];

            sort(edge,edge+n);

            for(int i=0;i<n-2;i++)
                if(edge[i]+edge[i+1]>edge[i+2]) {
                    tri_been=true;
                    break;
                }
        }
        else cin.ignore(1000000,'\n');
        
        cout<<(n>45||tri_been?"YES":"NO")<<'\n';
    }
}