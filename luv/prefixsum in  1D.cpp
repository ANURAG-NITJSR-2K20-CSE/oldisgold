/*
prefix sum  1D 2D

Given array of N integers. given Q queries 
and in each queries given L and R print sum of 
array element from index L to R(L, R included) 

constraints
1 <= N <= 10^5
1 <= a[i] <= 10^9
1 <= Q <= 10^5
1 <= L,R <= N
*/

// note : 1 se starting karna bahoot jaroori hai
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int a[N];
int pf[N];

int main() {
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		pf[i] = pf[i-1] + a[i];
	}
	int q;
	while(q--){
		int l, r;
		cin >> l >> r;
		cout << pf[r] - pf[l-1] << endl;
	}
	// O(N) + O(Q) = 10^ 5;
}
