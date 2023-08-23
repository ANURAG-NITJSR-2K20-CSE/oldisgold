
#include <bits/stdc++.h>
using namespace std;

void solve(){
	// Q1. calculation jo bhi hoti hai wo higher data  type me hoti hai
    
    // decreasing
	// double
	// float
	// long long int
	// long int
	// int 
	// char
    
    // this things is very important for the programming
    // order of precedence
    
     int, char, long int, long long int, float, double
    -10^9 << int << 10^9
    -10^12 << long int << 10^12
    -10^18 << long long << 10^18

    int a = 100000;
    int b = 100000;
    int c = a*b;
    cout << c << endl;
    int mx = INT_MAX;
    cout << mx;
    int mx = INT_MAX + 1; // gives the error
    
    cout << INT_MAX+1 << endl; // -2147483648 cycle back ho jata hai max range se
    INT_MIN < int < INT_MAX;

    // how to solve this problem
    int a = 100000;
    int b = 100000;
    long long c = a*b; // it will give the wrong ans
    // isilye hame 
    long long c = a * 1LL * b; // ab sahi ans aaega kyuki ab poora calculation long long long int me hoga
    
    // Q. why we not use double instead of long long for this 
    double a = 100000;
    double b = 100000;
    double c = a * b;
    c = 1e24;
    cout << c << endl; // print int scientific notation
    // ans -> due to precison error
    cout << fixed << c << endl // it print in real no now 
    cout << fixed << setprecision(0) << c << endl; // not a good practice
    // kabhi bhi jab tak calculation agr double me na bole tab tak nahi karna chaiye
    // because isme precsion error aata hai
    // karna to accuracy ki cost par karna 
    
   

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