#include <bits/stdc++.h>
using namespace std;

void solve(){
	int a, b, c;
	cin >> a >> b >> c;

	vector<int> set;
	int i = 1, j = 1;
	while(c--) {
		if(i * a < j * b){
			set.push_back(i*a);
			i++;
		} else if(i *a > j * b){
			set.push_back(j*b);
			j++;
		} else {
			set.push_back(j*b);
			i++;j++;
		}
	}

	int value_at_c = set.back();
    int step = 1;
	if(value_at_c % a == 0 && value_at_c % b == 0){
		step = (a*b)/__gcd(a,b);
	}
	else if(value_at_c% a == 0){
		step = a;
	} else if(value_at_c % b == 0){
		step = b;
	}

	while(value_at_c >= 0){
		cout << value_at_c << " ";
		value_at_c -= step;
	}
	cout << endl;

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