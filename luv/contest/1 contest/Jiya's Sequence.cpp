#include <bits/stdc++.h>
using namespace std;
const int N = 16;
#define ll long long
int a[N];
void solve(){
	int n;
	cin >> n;
	ll ans = 1;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		ans *= a[i];
	}
 
	if(((ans % 10 == 2 )|| (ans%10 == 3) || (ans %10 == 5))){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	} 
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}