#include<bits/stdc++.h>
using namespace std;
#define sync ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
 
int main(){
    sync
    int n;
    cin >> n;
    vector<int> ans;
    vector<int> g(n + 1, 0);
    vector<int> u(n), v(n);
    int l = 0, r = n - 2;
    for(int i = 0; i < n - 1; ++i){
        cin >> u[i] >> v[i];
        g[u[i]]++;
        g[v[i]]++;
    }
    for(int i = 0; i < n - 1; ++i){
        if(g[u[i]] == 1 || g[v[i]] == 1){
            ans.push_back(l++);
        }
        else ans.push_back(r--);
    }
    for(int i = 0; i < (int)ans.size(); ++i){
        cout << ans[i] << "\n";
    }
    return 0;	
}
