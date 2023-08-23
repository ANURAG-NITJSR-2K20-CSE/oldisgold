#include <bits/stdc++.h>
using namespace std;

const int N = 1e7+10;
int hash[N];

// hashing 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> a[i];
		hash[a[i]]++;
	}

	int q;
	while(q--){
		int x;
		cin >> x;
		cout << hash[x] << endl;
	}
    // O(N) + O(Q) = O(N) = 2*10^5;
	
}