include<bits/stdc++.h>
using namespace std;
#define sync ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
int main(){
	sync
	int t;
	cin >> t;
	while(t--){
		int n, m, sum = 0;
		cin >> n >> m;
		for(int i = 0; i < n; ++i){
			int x;
			cin >> x;
			sum += x;
		}
		if(sum >= m) cout << m << "\n";
		else cout << sum << "\n";
	}
	return 0;
}
