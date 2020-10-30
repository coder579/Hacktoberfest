#include<bits/stdc++.h>
using namespace std;
#define sync ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
int main(){
	sync
	int t;
	cin >> t;
	while(t--){
		int n, flag = 0;
		cin >> n;
		vector<int> a(2 * n + 1, 0), vis(2 * n + 1, 0);
		for(int i = 1; i <= n; ++i){
			int b;
			cin >> b;
			vis[b] = 1;
			a[2 * i - 1] = b;
		}
		for(int i = 1; i <= 2 * n; i += 2){
			int k = a[i] + 1;
			while(k <= 2 * n){
				if(vis[k] == 0){
					vis[k] = 1;
					a[i + 1] = k;
					break;
				}
				++k;
			}
			if(k > 2 * n){
				flag = 1;
				break;
			}
		}
		if(flag == 1) cout << "-1\n";
		else{
			for(int i = 1; i <= 2 * n; ++i){
				cout << a[i] << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
