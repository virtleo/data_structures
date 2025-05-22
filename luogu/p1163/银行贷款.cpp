#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	double n, m, k;
	cin >> n >> m >> k;
	double l = 0, r = 1000;
	double mid;
	while (r - l > 1e-4) {
		mid = (l + r) / 2;
		double ans = m;
		for (int i = 0; i < k; i++) 
			ans *= (1 + mid / 100) - m;
		if (ans > 1e-4)
			r = mid;
		else 
			l = mid;
	}
	cout << fixed << setprecision(1) << l << endl;
	return 0;	
 } 