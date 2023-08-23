#include <bits/stdc++.h>
using namespace std;

void solve(){
	int x = 4;
	int *p_x = &x;
	cout << "addr x:" << &x << endl;
	cout << "val p_x:" << p_x << endl;
	cout << "val *p_x:" << *p_x << endl;
	*p_x = 5;
	cout << "x:" << x << endl;
	cout << "*p_x + 1:"<< &p_x <<endl;

	// double pointer
	int **p_p_x = &p_x;
	cout << "Addr p_x:" << &p_x << endl;
	cout << "val p_p_x:" << p_p_x << endl;
	cout << "val *p_p_x:" << *p_p_x << endl;
	cout << "val **p_p_x:" << **p_p_x << endl;
	**p_p_x = 7;
	cout << "x:" << x << endl;

	// pointer me 1 add karne se adress change ho jata hai
	
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