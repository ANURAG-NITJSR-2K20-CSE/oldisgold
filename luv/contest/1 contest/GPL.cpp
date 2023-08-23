#include <bits/stdc++.h>
using namespace std;
const int N = 61;
#define ll long long
// deal with large number
void solve(){
	int k;
	cin >> k;
	string s;
	cin >> s;
    int n = s.size();
    long long no = 0;
    
	for(int i = n -1; i>=0; i--){
		
		if(s[i] == '1'){
			no += (ll)pow(2,n-i-1);
		}
	}
		cout << no << endl;
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