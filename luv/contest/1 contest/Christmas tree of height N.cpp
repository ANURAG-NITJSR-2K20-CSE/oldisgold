// #include <bits/stdc++.h>
// using namespace std;

// long long int fac(int  n){
// 	long long  f = 1;
// 	for(int i = 1; i <= n; ++i){
// 		f *= 1LL * i;
// 	}
// 	return f;
// }
// long long int fun_ncr(int r, int c){
// 	// cout << fac(r);
// 	return (fac(r)/(fac(c)* 1LL *fac(r-c)));
// }
// void solve(){
// 	int n;
// 	cin >> n;

// 	for(int i = 0; i < n; ++i){
// 		for(int j = 0; j <= i; ++j){
// 			cout << fun_ncr(i,j) << " ";
// 		}
// 		cout << endl;
// 	}
// }

// int main() {
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0); cout.tie(0);

// 	int t = 1;
// 	cin >> t;
// 	while(t--){
// 		solve();
// 	}
//


#include <bits/stdc++.h>



using namespace std;

void printPascal(long long n) {

	for (long long i = 1; i <= n; i++) {
			long long c = 1;

		for (long long j = 1; j <= i; j++)

		{

			cout << c << " ";

			c = c * (i - j) / j;

		}

		cout << "\n";

	}

}



int main(){

	int t;
    cin >> t;

	while (t--){
		long long n;
		cin >> n;
		printPascal(n);
	}

	return 0;

}