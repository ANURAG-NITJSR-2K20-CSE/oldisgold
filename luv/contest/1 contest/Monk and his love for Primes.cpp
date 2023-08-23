#include <bits/stdc++.h>
using namespace std;

bool isPrime(int  n){
	if(n == 0 || n == 1) return false;
    
    for(int i = 2; i < n; i++){
    	if(n%i == 0) return false;
    }
    return true;
}
void solve(){
	string s;
	cin >> s;
    
    int n = s.size();
    long long x = 0;
    for(int i = 0; i < n; ++i){
		if(s[i] >= 'a' && s[i] <= 'z'){
			s[i] = s[i]-'a'+'A';
			x += s[i];
		} else if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] = s[i]-'A'+'a';
			x -= s[i];
		}
	}

	x = abs(x);

	if(isPrime(x)){
		cout << 1 << endl;
	} else {
		cout << 0 << endl;
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