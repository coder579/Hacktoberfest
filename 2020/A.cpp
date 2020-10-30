#include<bits/stdc++.h>
using namespace std;
#define sync ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

int main(){
    sync
    int t;
    cin >> t;
    while(t--){
        int n, k, ind = 0, nind = 0;
        cin >> n;
        vector<bool> a(n, false), b(n, false);
        for(int i = 0; i < n; ++i){
            cin >> k;
            int g, flag = 0;
            for(int j = 0; j < k; ++j){
                cin >> g;
                if(flag == 0 && !b[g - 1]){
                    b[g - 1] = true;
                    flag = 1;
                    a[i] = true;
                }
            }
        }
        for(int i = 0; i < n; ++i){
            if(!a[i]){
                nind = i + 1;
                break;
            }
        }
        for(int i = 0; i < n; ++i){
            if(!b[i]){
                ind = i + 1;
                break;
            }
        }
        if(nind != 0) cout << "IMPROVE\n" << nind << " " << ind << "\n";
        else cout << "OPTIMAL\n";
    }
    return 0;	
}
