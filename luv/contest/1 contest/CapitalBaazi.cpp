#include <bits/stdc++.h>
using namespace std;

void solve(){
	// string s;
	// while(cin >> s){
	// 	transform(s.begin(), s.end(), s.begin(), ::toupper);
	// 	cout << s << endl;
	// }

	// 2nd approach
	string s;
	getline(cin, s);
    
    int n = s.size();
	for(int i = 0; i < n; i++){
		char ch = s[i];
		if(ch == ' '){
			cout << endl;
		} else {
			cout << (char)(ch - 'a' + 'A');
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t = 1;
	// cin >> t
	while(t--){
		solve();
	}
}